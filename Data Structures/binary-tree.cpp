#include<stdio.h>
#include<stdlib.h>

struct Node{ //structuring the node for the binary tree
    struct Node* left;
    int data;
    struct Node* right;
};

struct Node *createNode(){ //function to create node
    int data;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value of the node: ");
    scanf("%d", &newNode->data);
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

void preOrder(struct Node *root){
    if(root != NULL){
        printf("\n%d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("\n%d", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("\n%d", root->data);
    }
}

void freeTree(struct Node *root){
    if(root != NULL){
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main(){
    struct Node *nodeOne = createNode();
    struct Node *nodeTwo = createNode();
    struct Node *nodeThree = createNode();
    struct Node *nodeFour = createNode();
    struct Node *nodeFive = createNode();
    struct Node *nodeSix = createNode();
    struct Node *nodeSeven = createNode();

    nodeOne -> left = nodeTwo;
    nodeOne -> right = nodeThree;

    nodeTwo -> left = nodeFour;
    nodeTwo -> right = nodeFive;

    nodeThree -> left = nodeSix;
    nodeThree -> right = nodeSeven;

    printf("\nPre-Order Traversal.");
    preOrder(nodeOne);

    printf("\nIn-Order Traversal.");
    inOrder(nodeOne);

    printf("\nPost-Order Traversal.");
    postOrder(nodeOne);

    freeTree(nodeOne);

    return 0;
}