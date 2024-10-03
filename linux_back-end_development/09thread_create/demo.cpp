#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    int bh=8;
    string message="我是帅哥";

    pid_t pid =fork();
    cout<<"pid is"<<pid<<endl;

    //son_thread run from here.
    cout<<"my dear:"<<bh<<"\nnumber:"<<message<<endl;
   

}