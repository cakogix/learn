#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int i;
    for(i=0;i<150;i++){
        cout<<i<<":"<<strerror(i)<<endl;
    }


    return 0;
}