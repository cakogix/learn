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
    bool isRobotBounded(string instructions) {
        int x=0,y=0;
        int direction=0;
        for(int i=0;i<instructions.length();i++){
            if(instructions[i]=='G'){
                if(direction==0){
                    y++;
                }
                else if(direction==1){
                    x++;
                }
                else if(direction==2){
                    y--;
                }
                else if(direction==3){
                    x--;
                }
            }
            else{
                if(instructions[i]=='L'){
                    direction=(direction+3)%4;
                }
                else if(instructions[i]=='R'){
                    direction=(direction+1)%4;
                }
            }
        }
        if(x==0&&y==0){
            return true;
        }
        return direction!=0;
    }

};