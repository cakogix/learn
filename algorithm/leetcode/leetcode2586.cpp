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
    int vowelStrings(vector<string>& words, int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            char left=words[i][0];
            char right=words[i][words[i].length()-1];
            if((left=='a'||left=='e'||left=='i'||left=='o'||left=='u')&&(right=='a'||right=='e'||right=='i'||right=='o'||right=='u')){
                sum++;
            }
        }
        return sum;
    }
};