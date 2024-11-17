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
    int smallestNumber(int n, int t) {
        int sum=0;
        for(int i=n;;i++){
            sum=0;
            if(getSum(i)%t==0){
                return i;
            }

        }
    }
    int getSum(int n){
        int product=1;
        while(n>0){
            int digit=n%10;
            product*=digit;
            n/=10;
        }
        return product;
    }
};