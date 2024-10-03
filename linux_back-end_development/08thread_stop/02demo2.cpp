#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;

int main(int argc,char *argv[])
{
    /*
    int ret=execl("/bin/ls","/bin/ls","-lt","/tmp",0);
    cout<<"ret="<<ret<<endl;
    perror("execl");
    */

    char *args[10];
    args[0]="/bin/ls";
    args[1]="-lt";
    args[2]="/tmp";
    args[3]=0;

    int ret=execv("/bin/ls",args);
    cout<<"ret="<<ret<<endl;

    perror("execv");


    /*注意：
1）如果执行程序失败则直接返回-1，失败原因存于errno中。
2）新进程的进程编号与原进程相同，但是，新进程取代了原进程的代码段、数据段和堆栈。
3）如果执行成功则函数不会返回，当在主程序中成功调用exec后，被调用的程序将取代调用者程序，也就是说，exec函数之后的代码都不会被执行。
4）在实际开发中，最常用的是execl()和execv()，其它的极少使用。*/
}