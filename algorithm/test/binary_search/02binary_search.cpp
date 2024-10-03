#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num={1,2,3,4,5};
    int target=2;
    int left=0;
    int right=num.size();
    while(left<right){
        int middle=(left+right)/2;
        if(num[middle]==target){
            return middle;
        }
        if(target>num[middle]){
            left=middle+1;
        }
        if(target<num[middle]){
            right=middle;
        }
    }

    return -1;
}