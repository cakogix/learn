using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k, int numOperations)
    {
        int n = nums.size();
        int max_freq = 0;
        // 计算数组中所有元素的和
        int sum = 0;
        for (int num : nums)
        {
            sum += num;
        }

        // 计算平均值
        int avg = sum / n;

        // 我们可以将所有操作集中在平均值附近的元素上
        // 因为这样可以最大化一个元素的频率
        int max1 = numOperations * k;
        // 如果平均值不是整数，我们可以选择平均值的整数部分或者下一个整数
        // 因为这样可以最大化频率
        int target = numOperations < n ? nums[0] : avg + (sum % n != 0);

        // 计算能够达到目标值的最大频率
        for (int i = 0; i < n; ++i)
        {
            // 计算当前元素需要增加的值以达到目标值
            int need = target - nums[i];
            // 如果需要增加的值在 [-k, k] 范围内，那么可以将其增加到目标值
            if (need >= -k && need <= k)
            {
                max_freq = max(max_freq, 1 + (max1 - abs(need)) / (k + 1));
            }
        }

        return max_freq;
    }
};