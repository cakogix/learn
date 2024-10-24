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
    bool repeatedSubstringPattern(string s)
    {
        vector<char> c;
        int count = 1;
        if (s.size() < 2)
            return false;

        for (int j = 1; j < s.size(); j++)
        {
            c.clear();
            if (s[0] == s[j] && s[1] == s[j + 1])
            {
                count = j;
                break;
            }
            c.push_back(s[j]);
        }
        if (c.size() == 0)
        {
            return false;
        }
        int ccc = 0;
        for (int i = count; i < s.size(); i++)
        {
            int ccount = ccc % count;
            if (s[i] != c[ccount])
                return false;

            ccc++;
        }
        return true;
    }
};
