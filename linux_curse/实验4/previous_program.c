#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// 函数用于计算文件的字符数
void count_chars(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }
    long char_count = 0;
    int ch;
    // 读取文件直到 EOF
    while ((ch = fgetc(file)) != EOF) {
        char_count++;
    }
    fclose(file);
    printf("这个文件 %s 有 %ld 字符.\n", filename, char_count);
}

int main(int argc, char *argv[]) {
    // 检查参数个数
    if (argc < 2) {
        fprintf(stderr, "用法: %s <file1> <file2> ... <fileN>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // 创建子进程来处理每个文件
    for (int i = 1; i < argc; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            // 子进程
            count_chars(argv[i]);
            exit(EXIT_SUCCESS);
        } else if (pid < 0) {
            // fork失败
            perror("fork failed");
            exit(EXIT_FAILURE);
        }
    }

    // 父进程等待所有子进程结束
    while ((pid_t)wait(NULL) > 0) {}

    return EXIT_SUCCESS;
}
