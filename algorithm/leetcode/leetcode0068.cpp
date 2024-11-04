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
    int lengthOfLastWord(string s)
    {
        int length = 0;
        int index = s.length() - 1;
        while (s[index] == ' ')
        {
            index--;
        }

        while (s[index] != ' ' && index >= 0)
        {
            if (index == 0)
            {
                length++;
                break;
            }
            index--;
            length++;
        }
        return length;
    }
};
