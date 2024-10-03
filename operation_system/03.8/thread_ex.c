#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>

#define gettid() syscall(__NR_gettid)

pthread_t ntid1, ntid2, ntid3;

void *printids(void *s)
{
    pid_t pid;
    pid_t ktid;
    pthread_t utid;

    pid=getpid();
    ktid=gettid();
    utid=pthread_self();

    printf("%s pid %u ktid %u utid %u (0x%x)\n",s,(unsigned int)pid,
            (unsigned int )ktid,(unsigned int)utid,(unsigned int)utid);
    sleep(1); // Add sleep to observe thread behavior
    return NULL;
}

int main(){
    pthread_create(&ntid1,NULL,printids,"new thread 1:");
    pthread_create(&ntid2,NULL,printids,"new thread 2:");
    pthread_create(&ntid3,NULL,printids,"new thread 3:");

    printids("main thread:");
    sleep(2); // Give threads time to run

    pthread_join(ntid1, NULL);
    pthread_join(ntid2, NULL);
    pthread_join(ntid3, NULL);

    return 0;
}