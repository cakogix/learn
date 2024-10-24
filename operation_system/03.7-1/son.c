#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <errno.h>
#include <sys/ipc.h>
#include <semaphore.h>
int empty = 3;  // 声明一个全局标量，代表有水果的空位置
int apple = 0;  // 苹果的数量
int orange = 0; // 橘子的数量
sem_t sem;      // 信号量
// 父亲放苹果进程:




void father(void *arg)
{

    int i;
    while (empty)
    {                   // 如果盘中位置还有剩余，则放入一个苹果
        sem_wait(&sem); // 信号量减1，P操作。
        apple++;
        empty--;
        printf("爸爸放盘中放入一个苹果，此时苹果有%d个，橘子有%d个。\n", apple, orange);
        sem_post(&sem); // 信号量加1，V操作。
        sleep(2);
    }
}
// 妈妈放橘子进程:
void mother(void *arg)
{

    while (empty)
    {
        sem_wait(&sem); // 信号量减1，P操作。
        orange++;
        empty--;
        printf("妈妈向盘中放入一个橘子，此时苹果有%d个，橘子有%d个。\n", apple, orange);
        sem_post(&sem); // 信号量加1，V操作。
        sleep(2);
    }
}
// 儿子取苹果:
void son(void *arg)
{

    while (apple)
    {                   // 如果盘中有苹果
        sem_wait(&sem); // 信号量减1，P操作。
        apple--;
        empty++;
        printf("儿子吃了一个苹果，此时苹果有%d个，橘子有%d个。\n", apple, orange);
        sem_post(&sem); // 信号量加1，V操作。
        sleep(3);
    }
}
// 女儿取橘子:
void daughter(void *arg)
{

    while (orange)
    {                   // 如果盘中有橘子
        sem_wait(&sem); // 信号量减1，P操作。
        orange--;
        empty++;
        printf("女儿吃了一个橘子，此时苹果有%d个，橘子有%d个。\n", apple, orange);
        sem_post(&sem); // 信号量加1，V操作。
        sleep(3);
    }
}
void main(int argc, char *argv[])
{
    pthread_t id1, id2, id3, id4;
    int ret;
    ret = sem_init(&sem, 0, 1); // 初始化信号量为1
    if (ret != 0)
    {
        perror("sem_init");
    }
    ret = pthread_create(&id1, NULL, (void *)father, NULL); // 创建线程1
    if (ret != 0)
    {
        perror("pthread1 cread1");
    }
    ret = pthread_create(&id2, NULL, (void *)mother, NULL); // 创建线程2
    if (ret != 0)
    {
        perror("pthread2 cread2");
    }
    ret = pthread_create(&id3, NULL, (void *)son, NULL); // 创建线程3
    if (ret != 0)
    {
        perror("pthread3 cread3");
    }
    ret = pthread_create(&id4, NULL, (void *)daughter, NULL); // 创建线程3
    if (ret != 0)
    {
        perror("pthread4 cread4");
    }
    pthread_join(id1, NULL); // 等待线程1完成
    pthread_join(id2, NULL); // 等待线程2完成
    pthread_join(id3, NULL); // 等待线程3完成
    pthread_join(id4, NULL); // 等待线程4完成
    exit(0);
}
