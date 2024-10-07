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
    bool isPowerOfThree(int n)
    {
        if (n == 1)
            return true;
        if (n % 3 != 0)
            return false;
        if (n == 0)
            return false;
        return isPowerOfThree(n / 3);
    }
};