#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

// 信号处理函数
void signal_handler(int sig) {
    // 这里不执行任何操作，只是让子进程退出
    exit(0); // 可以根据需要更改退出状态
}

int main() {
    pid_t pid;
    int status;

    // 安装信号处理函数
    signal(SIGUSR1, signal_handler);

    // 创建子进程
    pid = fork();

    if (pid == -1) {
        // 如果fork失败
        perror("fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // 子进程执行的代码
        printf("子进程：PID = %d\n", getpid());
        // 子进程在这里等待信号
        pause(); // pause() 会挂起进程，直到接收到信号
        // 如果pause返回，说明信号处理函数已经执行，子进程应该退出
        exit(0); // 确保子进程退出
    } else {
        // 父进程执行的代码
        printf("父进程：PID = %d\n", getpid());
        // 父进程等待几秒钟
        sleep(10);
        // 父进程向子进程发送信号
        printf("父进程向子进程 %d 发送 SIGUSR1 信号\n", pid);
        kill(pid, SIGUSR1);

        // 等待子进程结束
        if (waitpid(pid, &status, 0) == -1) {
            perror("waitpid failed");
            exit(EXIT_FAILURE);
        }

        // 检查子进程的退出状态
        if (WIFEXITED(status)) {
            printf("子进程 %d 正常结束\n", pid);
        } else if (WIFSIGNALED(status)) {
            printf("子进程 %d 被信号 %d 结束\n", pid, WTERMSIG(status));
            // 可以根据信号编号输出更多信息
            switch (WTERMSIG(status)) {
                case SIGINT:
                    printf(" - 型号类型: 中断信号\n");
                    break;
                case SIGTERM:
                    printf(" - 型号类型: 终止信号\n");
                    break;
                case SIGUSR1:
                    printf(" - 型号类型: 用户定义信号1\n");
                    break;
                // 可以添加更多信号的处理
                default:
                    printf(" - 未知信号\n");
                    break;
            }
        } else if (WIFSTOPPED(status)) {
            printf("子进程 %d 被信号 %d 停止\n", pid, WSTOPSIG(status));
        } else {
            printf("子进程 %d 异常结束\n", pid);
        }
    }

    return 0;
}