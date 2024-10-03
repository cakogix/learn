#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num ={1,2,3,4,5,7,8};
    int left=0;
    int right =num.size()-1;
    int target=3;
    while(left<=right){
        int middle=(right+left)/2;

        if(target<num[middle]){
            right=middle-1;
        }
        else if(target>num[middle]){
            left=middle+1;
        }
        if(target==num[middle]){
            //return middle;
        }
    }
    //return-1
}
