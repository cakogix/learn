#include <iostream>
#include <unistd.h>
#include <signal.h>
using namespace std;

void func(int signum){
    cout<<"get the singal:"<<signum<<endl;
}

int main(int argc ,char *argv[]){
    signal(1,func);
    signal(15,func);

    while(true){
        cout<<"执行了一次任务.\n"<<endl;
        sleep(1);
    }

}