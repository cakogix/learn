#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork(); // 创建子进程

    if (pid == -1) {
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        // 子进程代码
        // 子进程执行后继续运行，成为孤儿进程
        while(1) {
            sleep(1);
        }
    } else {
        // 父进程代码
        // 父进程立即退出，使得子进程成为孤儿进程
        exit(0);
    }
    return 0;
}