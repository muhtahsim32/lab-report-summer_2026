#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(struct Node *root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void Inorder(struct Node *root) {
    if (root == NULL)
        return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}
void postorder(struct Node *root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}


int main() {
    struct Node *first = createNode(1);
    struct Node *sec = createNode(2);
    struct Node *third = createNode(3);
    struct Node *fourth = createNode(4);
    struct Node *fifth = createNode(5);
    struct Node *sixth = createNode(6);
    struct Node *seventh = createNode(7);

    first->left = sec;
    first->right = third;
    sec->left = fourth;
    sec->right = fifth;
    third->left = sixth;
    third->right = seventh;

    printf("Pre----order traversal: ");
    preorder(first);
    printf("\n");

    printf("In----order traversal: ");
    Inorder(first);
    printf("\n");

    printf("Post----order traversal: ");
    postorder(first);
    printf("\n");


    return 0;
}