#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <sys/mman.h>
int get_size(char *, char);
void *mmp(void *);
int main(int argc, char *argv[])
{
    int size;
    pthread_t tid1, tid2;
    FILE *fp;
    int i;
    if (argc != 3)
    {
        puts("Error: Missing parameter");
        puts("\tFor instance: ( ./a.out 10 M )");
        return 1;
    }
    //get size from user
    size = get_size(argv[1], (char)argv[2][0]);
    if (NULL == (fp = fopen("mmp_test", "w")))
    {
        puts("Open file fail!");
        return 3;
    }
    //creat file 
    for (i = 0; i < size; i++)
        fprintf(fp, "%d ", i);
    fprintf(fp, "\n");
    fclose(fp);
    printf("The size is %s%s file has been created.\n", argv[1], argv[2]);
    mmp((void *)size);
    pause();
    return 0;
}
int get_size(char *str, char ch)
{
    int size = 0;
    int length = strlen(str);
    int i;
    size = atoi(str);
    switch (ch)
    {
    case 'k':
    case 'K':
        return (int)(1024 * size / sizeof(int));
    case 'm':
    case 'M':
        return (int)(1024 * 1024 * size / sizeof(int));
    case 'g':
    case 'G':
        return (long)(1024 * 1024 * 1024 * size / sizeof(int));
    default:
        puts("Error: For instance: ( ./a.out 10 M )");
        exit(2);
    }
}

void *mmp(void *s)
{
    int size = (int)s;
    int *array = NULL; // 注意这里不需要分配内存
    int fd = 0;
    struct timeval tv1, tv2;

    // 开始计时
    gettimeofday(&tv1, NULL);

    // 打开文件进行读写
    fd = open("mmp_test", O_RDWR);
    if (fd == -1) {
        perror("Failed to open file");
        return NULL;
    }

    array = mmap(NULL, sizeof(int) * size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (array == MAP_FAILED) {
        perror("mmap failed");
        close(fd);
        return NULL;
    }

    // 解除映射
    munmap(array, sizeof(int) * size);
    // 同步内存
    msync(array, sizeof(int) * size, MS_SYNC); // 这里应该是msync(array, ...)
    close(fd); // 关闭文件描述符

    // 结束计时
    gettimeofday(&tv2, NULL);
    printf("Time of mmap: %ldus\n", (tv2.tv_sec - tv1.tv_sec) * 1000000 + (tv2.tv_usec - tv1.tv_usec));
    return NULL;
}