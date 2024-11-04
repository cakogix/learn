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
    bool isMonotonic(vector<int>& A) {
        int lon=A.size();
        if(lon==1) return true;
        int a=0,b=0;
        for(int i=0;i<lon-1;i++){    
            if(A[i]<A[i+1]) a=1;    //前面比后面小，a=1
            if(A[i]>A[i+1]) b=1;    //前面比后面大，b=1
        }
        if(a+b==2) return false;     //a和b都等于1,说明有问题
        else return true;
    }
};
