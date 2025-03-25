Node* LCA(Node* root, int a, int b) {
    if (!root) return nullptr;
    if (root->val > a && root->val > b)
        return LCA(root->left, a, b);
    if (root->val < a && root->val < b)
        return LCA(root->right, a, b);
    return root;
}
