#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node *get(int item) {
    Node *node = new Node();

    node->data = item;
    node->left = node->right = NULL;

    return node;
}

Node *insert(Node *node, int item) {
    if(node == NULL) {
        return get(item);
    }

    if(item < node->data) {
        node->left = insert(node->left, item);
    } else {
        node->right = insert(node->right, item);
    }

    return node;
}

void postOrder(Node *root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n", root->data);
    }
}

int main()
{
    int n;
    Node *root = NULL;

    while(scanf("%d", &n) != EOF) {
        root = insert(root, n);
    }

    postOrder(root);

    delete [] root;
    return 0;
}
