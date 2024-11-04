#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void cleanup(void) {
    printf("处理函数被调用了.\n");
}

int main() {
    // 注册退出处理程序
    atexit(cleanup);

    FILE *fp = fopen("output_exit.txt", "w");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }
    fprintf(fp, "要刷新的数据\n");
    fclose(fp); // 显式关闭文件

    printf("主函数即将调用exit.\n");
    exit(0); // 这里调用 exit，将触发退出处理程序
    return 0;
}
