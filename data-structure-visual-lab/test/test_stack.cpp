#include "stack.hpp"
#include <cassert>
#include <iostream>

int main() {
    Stack s;
    assert(s.isEmpty() == true);
    s.push(10);
    assert(s.isEmpty() == false);
    assert(s.size() == 1);
    s.push(20);
    assert(s.size() == 2);
    s.pop();
    assert(s.size() == 1);
    std::cout << "All stack tests passed!\n";
    return 0;
}
