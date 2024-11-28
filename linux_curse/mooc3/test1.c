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
        // 子进程执行后立即退出，不进行任何清理
        exit(0);
    } else {
        // 父进程代码
        // 父进程不等待子进程，导致子进程成为僵尸进程
        while(1) {
            sleep(1); // 父进程持续运行，不调用wait()或waitpid()
        }
    }
    return 0;
}