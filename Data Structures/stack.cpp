#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define maxSize 10

struct stack{
    int arrayStack[maxSize];
    int topOfStack;
};


bool isFull(struct stack* stackOne){
    return stackOne -> topOfStack == maxSize - 1;
}

bool isEmpty(struct stack* stackOne){
    return stackOne -> topOfStack == -1;
}

void push(struct stack* stackOne){
    if(isFull(stackOne)){
        printf("\nOverflow..");
        return;
    }else{
        int data;
        printf("\nEnter the value: ");
        scanf("%d", &data);
        stackOne -> topOfStack = stackOne -> topOfStack + 1;
        stackOne -> arrayStack[stackOne -> topOfStack] = data;
        return;
    }
}

void pop(struct stack* stackOne){
    if(isEmpty(stackOne)){
        printf("\nUnderflow..");
        return;
    }else{
        stackOne -> topOfStack = stackOne -> topOfStack - 1;
    }
}

void displayStack(struct stack* stackOne){
    if(isEmpty(stackOne)){
        printf("\nNo elements available to display!\nUnderflow...\nExiting...");
        return;
    }else{
        printf("The stack elements are...");
        for(int i = stackOne -> topOfStack; i>=0 ; i--){
            printf("\n%d", stackOne -> arrayStack[i]);
        }
    }
}

void takeInstructions(struct stack* stackOne){
    int checkThis;
    while(true){
        printf("\nWhat operation do you want to perform? \n1. Push\n2. Pop\n3. Display\n4. Exit\n: ");
        scanf("%d", &checkThis);
        switch (checkThis){
            case 1: 
            push(stackOne); 
            break;
            case 2: 
            pop(stackOne); 
            break;
            case 3: 
            displayStack(stackOne); 
            break;
            case 4: 
            return;
            default: 
            printf("\nInvalid input by the user!");
            break;
        }
    }
}

int main(){
    struct stack *stackOne = (struct stack*)malloc(sizeof(struct stack));
    stackOne -> topOfStack = -1;
    takeInstructions(stackOne);
    free(stackOne);
    return 0;
}