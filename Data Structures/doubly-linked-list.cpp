#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *back;
    int data;
    struct Node *front;
};

void traverseTheListFromFirst(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("\t%d", current->data);
        current = current -> front;
    }
}

void traverseTheListFromLast(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("\t%d", current->data);
        current = current -> back;
    }
}

struct Node *createNode()
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data for the node: ");
    scanf("%d", &newNode->data);
    newNode -> front = NULL;
    newNode -> back = NULL;
    return newNode;
}

int main()
{
    struct Node *nodeOne = createNode();
    struct Node *nodeTwo = createNode();
    struct Node *nodeThree = createNode();
    struct Node *nodeFour = createNode();
    struct Node *nodeFive = createNode();
    struct Node *nodeSix = createNode();

    nodeOne -> front = nodeTwo;
    nodeOne -> back = NULL;

    nodeTwo -> front = nodeThree;
    nodeTwo -> back = nodeOne;

    nodeThree -> front = nodeFour;
    nodeThree -> back = nodeTwo;

    nodeFour -> front = nodeFive;
    nodeFour -> back = nodeThree;

    nodeFive -> front = nodeSix;
    nodeFive -> back = nodeFour;

    nodeSix -> front = NULL;
    nodeSix -> back = nodeFive;

    printf("\nTraversing the doubly linked list from the front to back: ");
    traverseTheListFromFirst(nodeOne);

    printf("\n");
    printf("\nTraversing the doubly linked list from the back to front: ");
    traverseTheListFromLast(nodeSix);

    return 0;
}