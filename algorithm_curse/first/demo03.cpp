#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// 计算集合划分问题的答案
long long subsetPartitions(int n) {
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; // 空集有一种划分方式

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] += dp[i - j];
        }
    }

    return dp[n];
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    int n;

    // 从输入文件读取n的值
    inputFile >> n;

    // 计算不同的非空子集数
    long long result = subsetPartitions(n);

    // 将结果写入输出文件
    outputFile << result << endl;

    return 0;
}
