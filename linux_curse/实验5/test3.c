#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

volatile sig_atomic_t sigint_count = 0;

void handle_sigint(int sig) {
    sigint_count++;
    printf("SIGINT received %d times\n", sigint_count);
}

int main() {
    struct sigaction sa;
    sigset_t mask, prev_mask;

    // 设置信号处理函数
    sa.sa_handler = handle_sigint;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    if (sigaction(SIGINT, &sa, NULL) == -1) {
        perror("sigaction");
        exit(EXIT_FAILURE);
    }

    // 屏蔽SIGINT信号
    sigemptyset(&mask);
    sigaddset(&mask, SIGINT);
    if (sigprocmask(SIG_BLOCK, &mask, &prev_mask) == -1) {
        perror("sigprocmask");
        exit(EXIT_FAILURE);
    }

    printf("SIGINT is blocked for 10 seconds. Press Ctrl+C to test.\n");
    sleep(10);

    // 恢复SIGINT信号
    if (sigprocmask(SIG_SETMASK, &prev_mask, NULL) == -1) {
        perror("sigprocmask");
        exit(EXIT_FAILURE);
    }

    printf("SIGINT is unblocked.\n");
    while (1) {
        pause(); // 等待信号
    }

    return 0;
}