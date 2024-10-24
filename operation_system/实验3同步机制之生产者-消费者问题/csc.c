#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define M 32             /*缓冲数目*/

#define P(x)     sem_wait(&x)
#define V(x)    sem_post(&x)

int in = 0;         /*生产者放置产品的位置*/
int out = 0;        /*消费者取产品的位置*/

int buff[M] = {0};  /*缓冲初始化为0， 开始时没有产品*/

sem_t empty_sem;     /*同步信号量，当满了时阻止生产者放产品*/
sem_t full_sem;      /*同步信号量，当没产品时阻止消费者消费*/
pthread_mutex_t mutex; /*互斥信号量， 一次只有一个线程访问缓冲*/

void print(int id) {
    printf("ID: %d ", id);
    for(int i = 0; i < M; i++)
        printf("%d ", buff[i]);
    printf("\n");
}

void *producer(void *arg) {
    int id = *((int *)arg);
    for(;;) {
        sleep(1);
        P(empty_sem);
        pthread_mutex_lock(&mutex);

        in = (in + 1) % M;
        printf("Producer %d: (+)produce a product. buffer:", id);
        buff[in] = 1;
        print(id);
        ++in;
        pthread_mutex_unlock(&mutex);
        V(full_sem);
    }
    free(arg);
}

void *consumer(void *arg) {
    int id = *((int *)arg);
    for(;;) {
        sleep(2);
        P(full_sem);
        pthread_mutex_lock(&mutex);

        out = (out + 1) % M;
        printf("Consumer %d: (-)consume a product. buffer:", id);
        buff[out] = 0;
        print(id);
        ++out;
        pthread_mutex_unlock(&mutex);
        V(empty_sem);
    }
    free(arg);
}

void sem_mutex_init() {
    int init1 = sem_init(&empty_sem, 0, M);
    int init2 = sem_init(&full_sem, 0, 0);
    if( (init1 != 0) && (init2 != 0)) {
        printf("sem init failed \n");
        exit(1);
    }
    int init3 = pthread_mutex_init(&mutex, NULL);
    if(init3 != 0) {
        printf("mutex init failed \n");
        exit(1);
    }
}

int main() {
    int num_producers = 3; // 定义生产者数量
    int num_consumers = 2; // 定义消费者数量
    //定义消费者和生产者组
    pthread_t producers[num_producers], consumers[num_consumers];
    //储存id
    int *producer_ids[num_producers];
    int *consumer_ids[num_consumers];

    sem_mutex_init();
    
    for(int i = 0; i < num_producers; i++) {
        producer_ids[i] = malloc(sizeof(int));
        *producer_ids[i] = i;
        if(pthread_create(&producers[i], NULL, producer, producer_ids[i]) != 0) {
            printf("Producer %d creation failed \n", i);
            exit(1);
        }
    }

    for(int i = 0; i < num_consumers; i++) {
        consumer_ids[i] = malloc(sizeof(int));
        *consumer_ids[i] = i;
        if(pthread_create(&consumers[i], NULL, consumer, consumer_ids[i]) != 0) {
            printf("Consumer %d creation failed \n", i);
            exit(1);
        }
    }

    for(int i = 0; i < num_producers; i++) {
        pthread_join(producers[i], NULL);
    }

    for(int i = 0; i < num_consumers; i++) {
        pthread_join(consumers[i], NULL);
    }

    exit(0);
}
