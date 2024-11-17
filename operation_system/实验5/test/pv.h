#ifndef PV_H
#define PV_H

#include <semaphore.h>
#include <pthread.h>

#define M 32             /*缓冲数目*/

#define P(x)     sem_wait(&x)
#define V(x)    sem_post(&x)

extern int in;         /*生产者放置产品的位置*/
extern int out;        /*消费者取产品的位置*/
extern int buff[M];    /*缓冲区*/
extern sem_t empty_sem; /*同步信号量，当满了时阻止生产者放产品*/
extern sem_t full_sem;  /*同步信号量，当没产品时阻止消费者消费*/
extern pthread_mutex_t mutex; /*互斥信号量， 一次只有一个线程访问缓冲*/

void print();

#endif // PV_H