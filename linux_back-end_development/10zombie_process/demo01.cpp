#include <iostream>
#include <sys/wait.h>
using namespace std;

int main()
{
    

    // son_thread
    for (int i = 0; i < 100; i++)
    {
        cout << "son_thread continues" << endl;
        sleep(1);
    }
}