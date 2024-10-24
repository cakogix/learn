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
    string mergeAlternately(string word1, string word2) {
        int index1=0;
        int index2=0;
        string result;
        int size=max(word1.length(),word2.length());

        for(int i=0;i<size;i++){
            if(i<word1.length()){
                result.append(string(1,word1[i]));
            }
            if(i<word2.length()){
                result.append(string(1,word2[i]));
            }
        }
        return result;
    }
};