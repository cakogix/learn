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

vector<vector<int>> wins = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6}
};

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> tmp(9, -1); // 初始化tmp数组，-1表示该位置为空

        vector<int> a, b;

        int res = 0;
        for (int i = 0; i < moves.size(); i++) {
            res = moves[i][0] * 3 + moves[i][1]; // 计算位置索引
            if (i % 2 == 0) {
                tmp[res] = 1; // 玩家A的标记
                a.push_back(res);
            } else {
                tmp[res] = 0; // 玩家B的标记
                b.push_back(res);
            }
        }

        int flag = 3; // 3表示还没有决出胜负

        for (const vector<int>& c : wins) {
            if (tmp[c[0]] == 1 && tmp[c[1]] == 1 && tmp[c[2]] == 1) {
                flag = 1; // 玩家A赢
                break;
            } else if (tmp[c[0]] == 0 && tmp[c[1]] == 0 && tmp[c[2]] == 0) {
                flag = 0; // 玩家B赢
                break;
            }
        }

        if (flag == 1) return "A";
        else if (flag == 0) return "B";

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};
