#include <iostream>

class Node {
public:
    int data;
    Node* left, *right;
    Node(int item) : data(item), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;
    Node* lca(Node* node, int n1, int n2);
};

Node* BinaryTree::lca(Node* node, int n1, int n2) {
    if (node == nullptr)
        return nullptr;

    if (node->data > n1 && node->data > n2)
        return lca(node->left, n1, n2);

    if (node->data < n1 && node->data < n2)
        return lca(node->right, n1, n2);

    return node;
}

int main() {

    BinaryTree tree;
    tree.root = new Node(20);
    tree.root->left = new Node(8);
    tree.root->right = new Node(22);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(12);
    tree.root->left->right->left = new Node(10);
    tree.root->left->right->right = new Node(14);

    int n1 = 10, n2 = 14;
    Node* t = tree.lca(tree.root, n1, n2);
    std::cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << std::endl;

    n1 = 14;
    n2 = 8;
    t = tree.lca(tree.root, n1, n2);
    std::cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << std::endl;

    n1 = 10;
    n2 = 22;
    t = tree.lca(tree.root, n1, n2);
    std::cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << std::endl;

    return 0;
}
