#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <functional>

using namespace std;

// 计算最小得分
int minScore(vector<int>& stones) {
    priority_queue<int, vector<int>, greater<int>> minHeap(stones.begin(), stones.end());
    int score = 0;
    while (minHeap.size() > 1) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();
        score += first + second;
        minHeap.push(first + second);
    }
    return score;
}

// 计算最大得分
int maxScore(vector<int>& stones) {
    priority_queue<int> maxHeap(stones.begin(), stones.end());
    int score = 0;
    while (maxHeap.size() > 1) {
        int first = maxHeap.top(); maxHeap.pop();
        int second = maxHeap.top(); maxHeap.pop();
        score += first + second;
        maxHeap.push(first + second);
    }
    return score;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    int n;
    inputFile >> n;
    vector<int> stones(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> stones[i];
    }

    int minResult = minScore(stones);
    int maxResult = maxScore(stones);

    outputFile << minResult << endl;
    outputFile << maxResult << endl;

    return 0;
}
