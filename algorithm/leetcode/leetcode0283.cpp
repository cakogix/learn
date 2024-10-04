#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0; // 用于记录非零元素的数量
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[count++] = nums[i]; // 将非零元素移动到前面
            }
        }
        // 将剩余的位置填充为0
        for (int i = count; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};