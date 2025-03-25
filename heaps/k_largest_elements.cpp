#include <iostream>
#include <queue>
#include <vector>

std::vector<int> kLargest(const std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k)
            minHeap.pop();
    }

    std::vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    return result;
}

int main() {
    std::vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 3;

    std::vector<int> largest = kLargest(nums, k);
    std::cout << "Top " << k << " largest elements: ";
    for (int val : largest)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
