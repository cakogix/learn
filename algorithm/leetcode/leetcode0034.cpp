#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int leftBorder = getleft(nums, target);
        int rightBorder = getright(nums, target);
        // 情况一
        if (leftBorder == -4 || rightBorder == -4)
            return {-1, -1};
        // 情况三
        if (rightBorder - leftBorder > 1)
            return {leftBorder + 1, rightBorder - 1};
        // 情况二
        return {-1, -1};
    }
    int getright(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int rightBorder = -4;
        while (left <= right)
        {
            int middle = left + ((right - left) / 2);
            if (target < nums[middle])
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
                rightBorder = left;
            }
        }
        return rightBorder;
    }
    int getleft(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size()-1;
        int leftBorder = -4;
        while (left <= right)
        {
            int middle = left + ((right - left) / 2);
            if (target > nums[middle])
            {
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
                leftBorder = right;
            }
        }
        return leftBorder;
    }
};