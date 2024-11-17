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
    string multiply(string num1, string num2) {
        int res=0;
        int count=1;
        for(int i=0;i<num1.size();i++){

            for(int j=0;j<num2.size();i++){
                int tmp=(int)(num1[i]-'0')*count*;
            }
            count*=10;
        }
    }
};