// 如果有一对小兔，每一个月都生下一对小兔，
// 而所生下的每一对小兔在出生后第三个月也生下一对小兔。
// 那么由一对兔子开始，n个月后有多少兔子。
#include <iostream>
using namespace std;
#define MAX_N 100
long long arr[MAX_N+5]={0};

long long f(int n)
{
    if (n <= 2)
        return n;
    if(arr[n])return arr[n];
    arr[n]=f(n - 1) + f(n - 2);
    return arr[n];
}

int main()
{
    int c;
    cin>>c;
    cout<<f(c)<<endl;
    return 0;
}
