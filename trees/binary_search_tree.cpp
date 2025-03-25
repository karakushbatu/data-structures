#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->val)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->val == key) return true;
    if (key < root->val)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);

    cout << "Searching 15: " << (search(root, 15) ? "Found" : "Not found") << endl;
    cout << "Searching 20: " << (search(root, 20) ? "Found" : "Not found") << endl;

    return 0;
}
