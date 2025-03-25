#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> maxHeap;

    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(15);
    maxHeap.push(100);

    std::cout << "Max Heap: ";
    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}
