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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> res;
        
        int right=matrix[0].size()-1;
        int left=0;
        int down=matrix.size()-1;
        int up=0;

        int time=0;
        while(true){

        for(int i=left;i<=right;i++)res.push_back(matrix[up][i]);
        if(++up>down){
            break;
        }
        for(int i=up;i<=down;i++)res.push_back(matrix[i][right]);
        if(--right<left){
            break;
        }
        for(int i=right;i>=left;i--)res.push_back(matrix[down][i]);
        if(--down<up){
            break;
        }
        for(int i=down;i>=up;i--)res.push_back(matrix[i][left]);
        if(++left>right){
            break;
        }
        }
        return res;
    }
};