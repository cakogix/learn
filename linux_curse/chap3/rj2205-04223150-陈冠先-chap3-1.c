#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <semaphore.h>
#include <fcntl.h>    // For O_* constants
#include <sys/stat.h> // For mode constants

int main() {
    // 创建两个名义信号量
    sem_t *parent_sem = sem_open("/parent_semaphore", O_CREAT, 0644, 0);
    sem_t *child_sem = sem_open("/child_semaphore", O_CREAT, 0644, 1);

    if (parent_sem == SEM_FAILED || child_sem == SEM_FAILED) {
        perror("sem_open");
        return 1;
    }

    pid_t pid = fork();
    
    if (pid < 0) {
        // fork失败
        perror("fork failed");
        sem_close(parent_sem);
        sem_close(child_sem);
        sem_unlink("/parent_semaphore");
        sem_unlink("/child_semaphore");
        return 1;
    } else if (pid == 0) {
        // 子进程
        for (int i = 1; i <= 5; ++i) {
            sem_wait(child_sem); // 等待子进程信号量
            printf("子进程:(PID: %d) %d\n", getpid(), i);
            sem_post(parent_sem); // 释放父进程信号量
        }
    } else {
        // 父进程
        for (int i = 1; i <= 5; ++i) {
            sem_wait(parent_sem); // 等待父进程信号量
            printf("父进程:(PID: %d) %d\n", getpid(), i);
            sem_post(child_sem); // 释放子进程信号量
        }
        wait(NULL); // 等待子进程结束
    }

    // 清理信号量
    sem_close(parent_sem);
    sem_close(child_sem);
    sem_unlink("/parent_semaphore");
    sem_unlink("/child_semaphore");

    return 0;
}
