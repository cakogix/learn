#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// 信号处理函数

void cleanup(void) {
    printf("处理函数被调用了.\n");
}

int main() {
    // 注册退出处理程序
    atexit(cleanup);

    FILE *fp = fopen("output__exit.txt", "w");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }
    fprintf(fp, "数据要被刷新\n");

    printf("主函数即将调用 _exit.\n");
    _exit(0); // 这里调用 _exit，将不会触发退出处理程序
    return 0;
}
