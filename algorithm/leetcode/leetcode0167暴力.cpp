#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int leftIndex=0;
        int rightIndex=numbers.size()-1;

        while(leftIndex<rightIndex){
            int sum=numbers[leftIndex]+numbers[rightIndex];
            if(sum>target){
                rightIndex--;
            }else if(sum<target){
                leftIndex++;
            }else{
                return {leftIndex+1,rightIndex+1};
            }
        }
        return {};
    }
};