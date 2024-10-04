#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int leftIndex = 0;
        int rightIndex = nums.size() - 1;

        vector<int> numsTemp(nums.size());
         for (int tempIndex = nums.size() - 1; tempIndex >= 0; tempIndex--) 
        {
            if (abs(nums[leftIndex]) < abs(nums[rightIndex]))
            {
                numsTemp[tempIndex] = nums[rightIndex] * nums[rightIndex];
                rightIndex--;
            }
            else
            {
               numsTemp[tempIndex] = nums[leftIndex] * nums[leftIndex];
                leftIndex++;
            }
        }
        return numsTemp;
    }
};