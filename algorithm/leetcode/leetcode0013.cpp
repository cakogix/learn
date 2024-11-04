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


unordered_map<char, int> ROMAN = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 1; i < s.length(); i++) { // 遍历相邻的罗马数字
            int x = ROMAN[s[i - 1]], y = ROMAN[s[i]];
            ans += x < y ? -x : x;
        }
        return ans + ROMAN[s.back()]; // 加上最后一个
    }
};
