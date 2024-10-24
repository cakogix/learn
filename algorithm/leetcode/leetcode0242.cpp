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
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        vector<char> s1(s.begin(),s.end());
        vector<char> t1(t.begin(),t.end());
        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for(int i=0;i<s1.size();i++){
            if(s1[i]!=t1[i]){
                return false;
            }
        }
        return true;
    }
};
