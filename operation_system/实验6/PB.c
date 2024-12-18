#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/time.h>
#include <fcntl.h>
#include <sys/mman.h>
int get_size(char *, char);
void *read_and_write(void *);
int main(int argc, char *argv[])
{
    int size;
    FILE *fp;
    int i;
    if (argc != 3)
    {
        puts("Error: Missing parameter");
         puts("\tFor instance: ( ./a.out 10 M )");
        return 1;
    }
    //计算文件大小
    size = get_size(argv[1], (char)argv[2][0]);
    if (NULL == (fp = fopen("mmp_test", "w")))
    {
        puts("Open file fail!");
        return 3;
    }
    //根据用户指定的大小构造文件
    for (i = 0; i < size; i++)
        fprintf(fp, "%d ", i);
    fprintf(fp, "\n");
    fclose(fp);
    printf("The size is %s%s file has been created.\n", argv[1], argv[2]);
   //读写文件
    read_and_write((void *)size);
    pause();
    return 0;
}
//根据用户输入的数据计算生成的文件大小
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
        return (int)(1024*size / sizeof(int));
    case 'm':
    case 'M':
        return (int)(1024 *1024* size / sizeof(int));
    case 'g':
    case 'G':
        return (long)(1024 * 1024 *1024* size / sizeof(int));
    default:
        puts("Error: For instance: ( ./a.out 10 M )");
        exit(2);
    }
}
void *read_and_write(void *s)
{
    int size = (int)s;
    int *array = (int *)malloc(sizeof(int) * size);
    struct timeval tv1, tv2;
    int fd = 0;
    //记录开始时间
    gettimeofday(&tv1, NULL);
    //以可读可写的方式打开文件
    fd = open("mmp_test", O_RDWR);
    //通过read函数读文件

    if ( read(fd, (void *)array, sizeof(int) * size)<=0)
     {
        printf("Reading data failed...\n");
        return -1;
    }
    
       //写回文件
    if (write(fd, (void *)array, sizeof(int) * size)<=0)
    {
        printf("Writing data failed...\n");
        return -1;
    }
     free( array );
    close(fd);
    //记录结束时间
    gettimeofday(&tv2, NULL);
     printf("Time of read/write: %ldus\n", tv2.tv_usec-tv1.tv_usec);
   
  return NULL;
}