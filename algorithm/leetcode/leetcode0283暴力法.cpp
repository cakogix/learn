/* 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

请注意 ，必须在不复制数组的情况下原地对数组进行操作。 */
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                count++;
                for(int j=i;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                nums[size-1]=0;
                i--;
                size--;
            }
        }
    }
};