#ifndef STACK_HPP
#define STACK_HPP

#include <vector>

class Stack {
private:
    std::vector<int> data;
public:
    void push(int val);
    void pop();
    void peek();
    void print();
    bool isEmpty();
    int size();
};

#endif
