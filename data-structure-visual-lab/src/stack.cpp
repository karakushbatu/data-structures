#include "stack.hpp"
#include <iostream>

void Stack::push(int val) {
    data.push_back(val);
    std::cout << "Pushed: " << val << std::endl;
}

void Stack::pop() {
    if (data.empty()) {
        std::cout << "[Warning] Stack is empty. Cannot pop.\n";
        return;
    }
    int val = data.back();
    data.pop_back();
    std::cout << "Popped: " << val << std::endl;
}

void Stack::peek() {
    if (data.empty()) {
        std::cout << "[Info] Stack is empty.\n";
        return;
    }
    std::cout << "Top of stack: " << data.back() << std::endl;
}

void Stack::print() {
    if (data.empty()) {
        std::cout << "[Stack is empty]\n";
        return;
    }
    std::cout << "\nStack (top to bottom):\n";
    for (int i = data.size() - 1; i >= 0; i--) {
        std::cout << "| " << data[i] << " |\n";
    }
    std::cout << "-----\n";
}

bool Stack::isEmpty() {
    return data.empty();
}

int Stack::size() {
    return static_cast<int>(data.size());
}
