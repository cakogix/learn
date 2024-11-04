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
    int arraySign(vector<int> &nums)
    {
        double sum = 1;
        for (int n : nums)
        {
            if (n==0)
            return 0;
            sum = sum * n;
        }
        return signFunc(sum);
    }
    int signFunc(double n)
    {
        if (n > 0)
        {
            return 1;
        }
        else if (n == 0)
        {
            return 0;
        }
        else
            return -1;
    }
};