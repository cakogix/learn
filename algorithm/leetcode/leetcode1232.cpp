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
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2){
            return true;
        }
        for(int i=0;i<coordinates.size()-2;i++){
            double x=(coordinates[i+1][1]-coordinates[i][1])*(coordinates[i+2][0]-coordinates[i][0]);
            double y=(coordinates[i+2][1]-coordinates[i][1])*(coordinates[i+1][0]-coordinates[i][0]);
            if(x!=y){
                return false;
            }
        }
        return true;
    }
};