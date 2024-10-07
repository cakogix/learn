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
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
            return true;
        else if (n == 0)
            return false;
        else if (n > 2 && n % 2 != 0)
            return false;
        return isPowerOfTwo(n / 2);
    }
};