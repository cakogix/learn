#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_ARGS 10

// 函数用于分解命令和参数
void parse_command(char *input, char *args[]) {
    int i = 0;
    char *token = strtok(input, " ");
    while (token != NULL && i < MAX_ARGS - 1) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL; // 最后一个参数为 NULL 以表示命令结束
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <command1> <command2> [-option1] [-option2] ...\n", argv[0]);
        exit(1);
    }

    // 用于存储命令的参数
    char *args1[MAX_ARGS]; // 用于第一个命令的参数
    char *args2[MAX_ARGS]; // 用于第二个命令的参数
    int pipefd[2];

    // 创建管道
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(1);
    }

    // 解析命令1（ls -l）
    parse_command(argv[1], args1);

    // 创建第一个子进程执行命令1
    pid_t pid1 = fork();
    if (pid1 == -1) {
        perror("fork");
        exit(1);
    } else if (pid1 == 0) {
        // 子进程：处理第一个命令
        // 关闭管道的读取端
        close(pipefd[0]);

        // 将标准输出重定向到管道写端
        dup2(pipefd[1], STDOUT_FILENO);
        close(pipefd[1]);

        // 执行第一个命令
        if (execvp(args1[0], args1) == -1) {
            perror("execvp");
            exit(1);
        }
    }

    // 解析命令2（cat -）
    parse_command(argv[2], args2);

    // 创建第二个子进程执行命令2
    pid_t pid2 = fork();
    if (pid2 == -1) {
        perror("fork");
        exit(1);
    } else if (pid2 == 0) {
        // 子进程：处理第二个命令
        // 关闭管道的写入端
        close(pipefd[1]);

        // 将标准输入重定向到管道读取端
        dup2(pipefd[0], STDIN_FILENO);
        close(pipefd[0]);

        // 执行第二个命令
        if (execvp(args2[0], args2) == -1) {
            perror("execvp");
            exit(1);
        }
    }

    // 父进程关闭管道的两端
    close(pipefd[0]);
    close(pipefd[1]);

    // 等待两个子进程退出
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);

    return 0;
}

