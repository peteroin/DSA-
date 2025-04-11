#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Function to search for a node in BST
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    struct Node* root = NULL;
    int nodes[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(nodes)/sizeof(nodes[0]);

    // Inserting nodes into the BST
    for (int i = 0; i < n; i++) {
        root = insert(root, nodes[i]);
    }

    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    struct Node* result = search(root, key);
    if (result != NULL)
        printf("Node %d found in BST.\n", result->data);
    else
        printf("Node %d not found in BST.\n", key);

    return 0;
}
