#include <time.h>
#include <iostream>
using namespace std;

int main(void){
    time_t now =time(0);

    cout<<"now="<<now<<endl;

    tm tmnow;
    localtime_r(&now,&tmnow);

    string stime=to_string(tmnow.tm_year+1900)+"-"
                +to_string(tmnow.tm_mon)+"-"
                +to_string(tmnow.tm_mday)+" "
                +to_string(tmnow.tm_hour)+":"
                +to_string(tmnow.tm_min)+":"
                +to_string(tmnow.tm_sec);
    cout<<"stime="<<stime<<endl;


    return 0;
}