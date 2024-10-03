#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int ret=system("/bin/labc -l /tmp");
    cout<<"ret="<<ret<<endl;
    perror("system");
}