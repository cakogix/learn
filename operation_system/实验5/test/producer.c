#include "pv.h"

void *producer()
{
    for(;;)
    {
        sleep(1);
        P(empty_sem);

        //上锁
        pthread_mutex_lock(&mutex);

        in = in % M;
        printf("(+)produce a product. buffer:");
        buff[in] = 1;
        print();
        ++in;
        //解锁
        pthread_mutex_unlock(&mutex);
        V(full_sem);
    }
}