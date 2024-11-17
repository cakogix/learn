#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include "pv.h"

int in = 0;         /*生产者放置产品的位置*/
int out = 0;        /*消费者取产品的位置*/
int buff[M] = {0};  /*缓冲区*/
sem_t empty_sem;     /*同步信号量，当满了时阻止生产者放产品*/
sem_t full_sem;      /*同步信号量，当没产品时阻止消费者消费*/
pthread_mutex_t mutex; /*互斥信号量， 一次只有一个线程访问缓冲*/

void print()
{
    int i;
    for(i = 0; i < M; i++)
        printf("%d ", buff[i]);
    printf("\n");
}

void *producer();
void *consumer();

void sem_mutex_init()
{
    /*
     *semaphore initialize
     */
    int init1 = sem_init(&empty_sem, 0, M);
    int init2 = sem_init(&full_sem, 0, 0);
    //成功初始化
    if( (init1 != 0) && (init2 != 0))
    {
        printf("sem init failed \n");
        exit(1);
    }
    /*
     *mutex initialize
     */
    int init3 = pthread_mutex_init(&mutex, NULL);
    if(init3 != 0)
    {
        printf("mutex init failed \n");
        exit(1);
    }
}

int main()
{
    pthread_t id1;
    pthread_t id2;
    int i;
    int ret;

    sem_mutex_init();
    
    ret = pthread_create(&id1, NULL, producer, NULL);
    if(ret != 0)
    {
        printf("producer creation failed \n");
        exit(1);
    }
    
    ret = pthread_create(&id2, NULL, consumer, NULL);
    if(ret != 0)
    {
        printf("consumer creation failed \n");
        exit(1);
    }

    pthread_join(id1,NULL);
    pthread_join(id2,NULL);

    exit(0);
}