#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "用法: %s <file1> <file2> ... <fileN>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *parent_output = freopen("result_parent.txt", "w", stdout);
    if (parent_output == NULL) {
        perror("Failed to redirect parent output");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i < argc; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            // 子进程
            FILE *child_output = freopen("result_child.txt", "a", stdout);
            if (child_output == NULL) {
                perror("Failed to redirect child output");
                exit(EXIT_FAILURE);
            }
            // 调用上一个程序来统计字符数
            char *child_argv[] = {"./previous_program", argv[i], NULL};
            execvp("./previous_program", child_argv);
            perror("execvp failed");
            exit(EXIT_FAILURE);
        } else if (pid < 0) {
            perror("fork failed");
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 1; i < argc; i++) {
        char wc_command[256];
        snprintf(wc_command, sizeof(wc_command), "wc -m %s", argv[i]);
        int status = system(wc_command);
        if (status == -1) {
            perror("system call failed");
            exit(EXIT_FAILURE);
        }
        // 获取命令执行结果
        char buffer[128];
        FILE *fp = popen(wc_command, "r");
        if (fp == NULL) {
            perror("popen failed");
            exit(EXIT_FAILURE);
        }
        if (fgets(buffer, sizeof(buffer), fp) == NULL) {
            perror("fgets failed");
            exit(EXIT_FAILURE);
        }
        pclose(fp);
        // 提取字符数
        long chars = atol(buffer);
        printf("%ld\n", chars); // 命令行输出字符数
        fprintf(parent_output, "%ld\n", chars); // 重定向到result_parent.txt
    }

    fclose(parent_output);
    while (wait(NULL) > 0) { }

    return EXIT_SUCCESS;
}