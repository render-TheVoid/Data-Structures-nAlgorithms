#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define maxSize 10

struct queue{
    int arrayOfQueue[maxSize];
    int rearQueue;
    int frontQueue;
};

bool isFull(struct queue *queueOne){
    return queueOne -> rearQueue == maxSize - 1;
}

bool isEmpty(struct queue *queueOne){
    return queueOne -> frontQueue == -1 || queueOne -> frontQueue > queueOne -> rearQueue;
}

void pop(struct queue *queueOne){
    if(isEmpty(queueOne)){
        printf("\nUnderflow...");
        return;
    }else{
        queueOne->frontQueue = queueOne->frontQueue + 1;
    }
}

void push(struct queue *queueOne){
    if(isFull(queueOne)){
        printf("\nOverflow...");
        return;
    }else{
        int data;
        printf("\nEnter the data to be pushed: ");
        scanf("%d", &data);
        queueOne->arrayOfQueue[++queueOne->rearQueue] = data;
    }
}

void display(struct queue *queueOne){
    if(isEmpty(queueOne)){
        printf("\nQueue is empty...");
        return;
    }
    printf("Elements in queue are:");
    for(int i=queueOne->frontQueue + 1; i<=queueOne->rearQueue; i++){
        printf("\t%d", queueOne -> arrayOfQueue[i]);
    }
}

void instructions(struct queue *queueOne){
    while(true){
        int operation;
        printf("\nChoose any operation\n1. Push\n2. Pop\n3. Display\n4. Exit\n: ");
        scanf("%d", &operation);
        switch(operation){

        case 1:
        push(queueOne);
        break;
        
        case 2:
        pop(queueOne);
        break;

        case 3:
        display(queueOne);
        break;

        case 4:
        printf("\nExiting...");
        return;

        default:
        printf("\nInvalid Input!");
        break;
        }
    }
}

int main(){
    struct queue *queueOne = (struct queue *)malloc(sizeof(struct queue));
    queueOne -> rearQueue = -1;
    queueOne -> frontQueue = -1;
    instructions(queueOne);
    free(queueOne);
    return 0;
}