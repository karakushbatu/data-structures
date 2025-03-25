#include <iostream>
#include <string>
#include "stack.hpp"

int main() {
    Stack stack;
    std::string command;
    int value;

    std::cout << "== Stack Visual Lab ==\n";
    std::cout << "Commands: push <val>, pop, peek, size, empty, print, exit\n";

    while (true) {
        std::cout << "> ";
        std::cin >> command;

        if (command == "push") {
            std::cin >> value;
            stack.push(value);
        } else if (command == "pop") {
            stack.pop();
        } else if (command == "peek") {
            stack.peek();
        } else if (command == "size") {
            std::cout << "Stack size: " << stack.size() << std::endl;
        } else if (command == "empty") {
            std::cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << std::endl;
        } else if (command == "print") {
            stack.print();
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Unknown command. Try again.\n";
        }
    }

    return 0;
}
