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
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        // 使用一个数组来存储到n为止的所有完全平方数
    vector<int> squares;
    for (int i = 1; i * i <= n; ++i) {
        squares.push_back(i * i);
    }

    // 使用一个向量来存储到n为止的最优解
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;  // 0的最优解是0

    // 遍历所有数字从1到n
    for (int i = 1; i <= n; ++i) {
        // 对于每个数字，遍历所有小于等于它的完全平方数
        for (int j = 0; j < squares.size() && squares[j] <= i; ++j) {
            dp[i] = min(dp[i], dp[i - squares[j]] + 1);
        }
    }

    return dp[n];
}
};
