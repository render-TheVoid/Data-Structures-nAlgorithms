#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverseTheList(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%d\t", current->data);
        current = current -> next;
        if(current == head)
        {
            return;
        }
    }
}

struct Node *createNode()
{
    struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the data part for the node: ");
    scanf("%d",&newNode->data);
    newNode -> next = NULL;
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

    nodeOne -> next = nodeTwo;
    nodeTwo -> next = nodeThree;
    nodeThree -> next = nodeFour;
    nodeFour -> next = nodeFive;
    nodeFive -> next = nodeSix;
    nodeSix -> next = nodeOne;

    printf("\nThe data of nodes are: ");
    traverseTheList(nodeOne);

    return 0;
}