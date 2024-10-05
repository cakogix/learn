/*
 * @lc app=leetcode.cn id=1534 lang=cpp
 * @lcpr version=30204
 *
 * [1534] 统计好三元组
 */


// @lcpr-template-start
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
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int res = 0;
        int s = arr.size();
        for(int i=s-1;i>-1;i--){
            for(int j=s-1;j>i;j--){
                for(int k=s-1;k>j;k--){
                    if(abs(arr[i]-arr[j])>a || abs(arr[j]-arr[k])>b || abs(arr[i]-arr[k])>c)
                        continue;
                    res++;
                }
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,0,1,1,9,7]\n7\n2\n3\n
// @lcpr case=end

// @lcpr case=start
// [1,1,2,2,3]\n0\n0\n1\n
// @lcpr case=end

 */

