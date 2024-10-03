#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using  namespace std;

int main()
{
  if (fork()>0)
  { // 父进程的流程。
    int sts;
    pid_t pid=wait(&sts);

    cout << "已终止的子进程编号是：" << pid << endl;
    //WIFEXITED拿到的是子进程退出的情况，如果正常则为真。
    //WEXISTATUS获取子进程退出状态
    //WERMSIG为子进程退出后的终止信号。、
    //正常退出：return;exit
    //异常退出：接收到信号
    if (WIFEXITED(sts)) { cout << "子进程是正常退出的，退出状态是：" << WEXITSTATUS(sts) << endl; }
    else { cout << "子进程是异常退出的，终止它的信号是：" << WTERMSIG(sts) << endl; }
  }
  else
  { // 子进程的流程。
    sleep(5);
    //int *p=0; *p=10;
    exit(1);
  }
}