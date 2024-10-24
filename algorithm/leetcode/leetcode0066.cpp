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
#include <cmath>

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int sum = 0;
        int count = digits.size() - 1;
        for (int tmp : digits)
        {
            sum = sum + tmp * (pow(10, count));
            count--;
        }
        sum=sum+1;
        string numberStr = std::to_string(sum);
        int length = numberStr.length();
        while (length>1)
        {   
            int tmp=sum/(length-1)*10;
            length--;
            digits.push_back(tmp);
        }
        return digits;
    }
};
