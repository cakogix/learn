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
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0;
        for(auto b:bills){
            if(b==5)
                five++;
            else if(b==10)
                five--,
                ten++;
            else if(ten>0)
                five--,
                ten--;
            else five-=3;
            if(five<0){
                return false;
            }

        }
        return true;
    }
};