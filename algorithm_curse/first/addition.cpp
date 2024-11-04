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



class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {

        int ans=0,n=nums.size();
        //n*1001 1.
        vector<vector<int>> dp(n,vector<int>(1001,1));
        for(int i=0;i<n;++i)
            for(int j=0;j<i;++j)
            {
                int d=nums[i]-nums[j]+500;
                dp[i][d]=max(dp[i][d],dp[j][d]+1);
                ans=max(ans,dp[i][d]);
            }
        return ans;
    }
};