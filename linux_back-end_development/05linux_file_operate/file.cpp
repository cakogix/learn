#include <iostream>
#include <dirent.h>
using namespace std;

int main(int argc,char *argv[]){
    if(argc!=2){cout<<"using ./demo 目录名\n";return -1;}

    DIR *dir;
    //打开目录，因为opdir返回的是一个ptr，如果为空返回的是nullptr
    if((dir=opendir(argv[1]))==nullptr)return -1;
    
    //存放从目录中读取到的内容
    struct dirent *stdinfo=nullptr;
    
    while(1)
    {
        if((stdinfo=readdir(dir))==nullptr)break;

        cout<<"文件名="<<stdinfo->d_name<<"，文件类型="<<(int)stdinfo->d_type<<endl;
    }
    
    //关闭目录指针。
    closedir(dir);

    return 0;
}