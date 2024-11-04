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
    bool judgeCircle(string moves)
    {
        int R = 0, L = 0, U = 0, D = 0;
        for (auto c : moves)
        {
            if (c == 'R')
                R += 1;
            if (c == 'L')
                L += 1;
            if (c == 'U')
                U += 1;
            if (c == 'D')
                D += 1;
        }
        if (R == L && U == D)
            return true;
        return false;
    }
};