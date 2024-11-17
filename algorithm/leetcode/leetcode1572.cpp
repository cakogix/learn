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
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int index1=0;
        int index3=0,index4=mat[0].size()-1;

        for(int i=0;i<mat.size();i++){
            sum+=mat[index1][index1];
            sum+=mat[index3][index4];
            index1++;
            index3++;
            index4--;
        }
        if(mat.size()%2!=0){
            sum-=mat[mat.size()/2][mat.size()/2];
        }
        return sum;  
    }

};