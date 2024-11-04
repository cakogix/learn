
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
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        vector<bool> res(l.size(),false);
        for (int i = 0; i < l.size(); ++i) {
            int left = l[i], right = r[i];
            vector<int> subarray(nums.begin() + left, nums.begin() + right + 1);
            
            sort(subarray.begin(), subarray.end()); 
            int d = subarray[1]-subarray[0];
            bool flag = true;
            for (int j = 0; j < subarray.size()-1; ++j) {
                if(subarray[j + 1] - subarray[j] != d) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                res[i] = true;
            }
        }
        return res;
    }
};
