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
    char findTheDifference(string s, string t) {
        int sum = 0;
        for (auto i : t)
            sum += i;
        for (auto i : s)
            sum -= i;
        return sum;
    }
};