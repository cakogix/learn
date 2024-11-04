    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <numeric> // 包含accumulate函数
    #include <fstream>

    using namespace std;

    // 检查是否可以将数组分割成m段，且每段的和不超过maxSum
    bool canSplit(const vector<int>& nums, int m, int maxSum) {
        int count = 1; // 至少需要一段
        int currentSum = 0;

        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                count++;
                if (count > m) return false; // 超过m段
                currentSum = num; // 开始新的一段
            }
        }
        return true;
    }

    // 使用二分查找找到最小的最大段和
    int findMinMaxSum(const vector<int>& nums, int m) {
        int left = *max_element(nums.begin(), nums.end()); // 最小可能值是数组中的最大值
        int right = accumulate(nums.begin(), nums.end(), 0); // 最大可能值是数组的总和

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canSplit(nums, m, mid)) {
                right = mid; // 如果可以分割，尝试找到更小的值
            } else {
                left = mid + 1; // 否则，增加最小值
            }
        }
        return left;
    }

    int main() {
        ifstream inputFile("input.txt");
        ofstream outputFile("output.txt");

        if (!inputFile.is_open() || !outputFile.is_open()) {
            cerr << "Error opening files." << endl;
            return 1;
        }

        int n, m;
        inputFile >> n >> m;
        vector<int> nums(n);

        for (int i = 0; i < n; ++i) {
            inputFile >> nums[i];
        }

        int result = findMinMaxSum(nums, m);
        outputFile << result << endl;

        inputFile.close();
        outputFile.close();

        return 0;
    }