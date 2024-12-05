#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <dirent.h>
#include <string.h>

// 信号处理函数，用于显示当前工作目录
void handle_sigusr1(int sig) {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
    }
}

// 信号处理函数，用于列出当前目录下的文件
void handle_sigusr2(int sig) {
    DIR *dir;
    struct dirent *entry;
    if ((dir = opendir(".")) == NULL) {
        perror("opendir() error");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}

int main() {
    // 安装信号处理函数
    signal(SIGUSR1, handle_sigusr1);
    signal(SIGUSR2, handle_sigusr2);

    // 主循环，等待信号
    while (1) {
        pause(); // 暂停执行，直到收到信号
    }

    return 0;
}