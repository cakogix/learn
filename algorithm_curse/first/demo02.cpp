#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = nums[i++];
    }
    while (j <= right) {
        temp[k++] = nums[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++) {
        nums[i] = temp[k];
    }
}

void mergeSortIterative(vector<int>& nums) {
    int n = nums.size();
    stack<pair<int, int>> stack;
    stack.push({0, n - 1});

    while (!stack.empty()) {
        auto [left, right] = stack.top();
        stack.pop();
        if (left >= right) continue;

        int mid = left + (right - left) / 2;
        stack.push({left, mid});
        stack.push({mid + 1, right});
        merge(nums, left, mid, right);
    }
}

int main() {
    vector<int> nums = {12, 11, 13, 5, 6, 7};
    mergeSortIterative(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
