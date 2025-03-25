#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(15);
    minHeap.push(1);

    std::cout << "Min Heap (Priority Queue): ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}
