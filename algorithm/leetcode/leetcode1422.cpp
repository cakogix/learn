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
    int maxScore(string s)
    {
        int maxSum = 0;

        // 遍历字符串，计算每个分割点的得分
        for (int i = 0; i < s.length() - 1; ++i)
        {
            int leftZeroCount = 0; // 左子字符串中0的数量
            int rightOneCount = 0; // 右子字符串中1的数量

            //统计左侧
            for (int j = 0; j <= i; j++)
            {
                if (s[j] == '0')
                {
                    leftZeroCount++;
                }
            }

            //统计右侧
            for (int k = i + 1; k < s.length(); k++)
            {
                if (s[k] == '1')
                {
                    rightOneCount++;
                }
            }

            maxSum = max(maxSum, leftZeroCount + rightOneCount);
        }

        return maxSum;
    }
};