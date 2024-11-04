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
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
          int d=arr[1]-arr[0];
          for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1]!=d){
                return false;
            }
          }
          return true;
    }
};