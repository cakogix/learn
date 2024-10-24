#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int x)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }

        // 判断左侧是否有序
        if (nums[left] <= nums[mid])
        {
            if (nums[left] <= x && x < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        { // 右侧有序
            if (nums[mid] < x && x <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1; // 未找到
}

int main()
{
    vector<int> nums = {5, 6, 7, 0, 1, 2, 3};
    int x = 5;
    int result = search(nums, x);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
