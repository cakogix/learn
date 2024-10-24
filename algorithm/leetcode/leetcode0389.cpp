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



class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<char> char1(s.begin(),s.end());
        vector<char> char2(t.begin(),t.end());  
        sort(char1.begin(),char1.end());
        sort(char2.begin(),char2.end());
        char res=' ';
        for(int i=0;i<char1.size();i++){
            if(char1[i]!=char2[i]){
                res=char2[i];
                return res;
            }
        }
        return char2.at(char2.size()-1);
    }
};