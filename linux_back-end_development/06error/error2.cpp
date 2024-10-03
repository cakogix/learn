#include <iostream>
#include <cstring>
#include <cerrno>
#include <sys/stat.h>
using namespace std;

int main(){
    int iret=mkdir("/tmp/aaa",0755);

    cout<<"iret="<<iret<<endl;
    cout<<errno<<":"<<strerror(errno)<<endl;

    return 0;
}