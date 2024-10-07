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
    bool isUgly(int n)
    {
        if (n < 1)
            return false;
        while (n % 5 == 0)
        {
            n /= 5;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 2 == 0)
        {
            n >>= 1;
        }
        return n == 1;
    }
};