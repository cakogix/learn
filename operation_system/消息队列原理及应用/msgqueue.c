#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/msg.h>
#include <unistd.h>
#include <string.h>

#define MAX_MSG_SIZE 512

// 消息结构体
struct message {
    long msg_type;
    char msg_text[MAX_MSG_SIZE];
};

// 互斥锁
pthread_mutex_t lock;

// 消息队列的key
key_t key = 1234;

// 初始化消息队列
int init_msg_queue() {
    int msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }
    return msgid;
}

// 生产者线程函数
void* producer(void* arg) {
    int msgid = *(int*)arg;
    struct message msg;
    char* hello = "Hello from producer!";

    for (int i = 0; i < 5; ++i) {
        pthread_mutex_lock(&lock);
        msg.msg_type = 1;
        strcpy(msg.msg_text, hello);
        if (msgsnd(msgid, &msg, strlen(msg.msg_text) + 1, 0) == -1) {
            perror("msgsnd");
            exit(1);
        }
        pthread_mutex_unlock(&lock);
        printf("Produced: %s\n", hello);
        sleep(1);
    }
    return NULL;
}

// 消费者线程函数
void* consumer(void* arg) {
    int msgid = *(int*)arg;
    struct message msg;

    for (int i = 0; i < 5; ++i) {
        pthread_mutex_lock(&lock);
        if (msgrcv(msgid, &msg, MAX_MSG_SIZE, 1, 0) == -1) {
            perror("msgrcv");
            exit(1);
        }
        pthread_mutex_unlock(&lock);
        printf("Consumed: %s\n", msg.msg_text);
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t prod, cons;
    int msgid = init_msg_queue();

    // 初始化互斥锁
    if (pthread_mutex_init(&lock, NULL) != 0) {
        perror("mutex_init");
        exit(1);
    }

    // 创建生产者和消费者线程
    if (pthread_create(&prod, NULL, producer, &msgid) != 0) {
        perror("pthread_create");
        exit(1);
    }
    if (pthread_create(&cons, NULL, consumer, &msgid) != 0) {
        perror("pthread_create");
        exit(1);
    }

    // 等待线程结束
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    // 销毁互斥锁
    pthread_mutex_destroy(&lock);

    // 删除消息队列
    if (msgctl(msgid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }

    return 0;
}
