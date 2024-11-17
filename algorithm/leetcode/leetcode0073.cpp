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
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> index(matrix.size(),vector<int>(matrix[0].size(),1));

        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    index[i][j]=0;
                }
            }
        }

        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[0].size();j++){
                if(index[i][j]==0){
                    for(int k=0;k<matrix[0].size();k++){
                        matrix[i][k]=0;
                    }
                    for(int k=0;k<matrix.size();k++){
                        matrix[k][j]=0;
                    }
                }

            }

        }
    }
};
