#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==val){
                count++;
                for(int j=i;j<nums.size();j++){
                    nums[j]=nums[j+1];
                }
                i--;
                size--;
            }
        }
        return size;
    }
};