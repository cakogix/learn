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
    int strStr(string haystack, string needle)
    {
        int index = -1;
        int flag = 0;
        if (needle.size() > haystack.size())
            return -1;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                for (int j = 0; j < needle.size(); j++)
                {
                    flag = 0;
                    if (haystack[i + j] == needle[j])
                    {
                        if (j == needle.size() - 1)
                            return i;
                        continue;
                    }
                    flag = 1;
                    break;
                }
            }
        }
        return index;
    }
};