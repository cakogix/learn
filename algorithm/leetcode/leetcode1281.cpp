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
    int subtractProductAndSum(int n)
    {
        int multiplication = 1;
        int addition = 0;
        int tmp = 0;
        if (n >= 10)
        {
            while (n > 0)
            {
                tmp = n % 10;
                n = n / 10;
                multiplication = multiplication * tmp;
                addition = addition + tmp;
            }
            return (multiplication - addition);
        }

        return 0;
    }
};