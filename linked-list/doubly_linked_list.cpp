#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        if (head)
            head->prev = newNode;
        head = newNode;
    }

    void displayForward() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " <-> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }

    ~DoublyLinkedList() {
        Node* curr = head;
        while (curr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtFront(30);
    dll.insertAtFront(20);
    dll.insertAtFront(10);
    dll.displayForward();
    return 0;
}
