#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	struct node* nodeOne = (struct node*)malloc(sizeof(struct node));
	struct node* nodeTwo = (struct node*)malloc(sizeof(struct node));
	struct node* nodeThree = (struct node*)malloc(sizeof(struct node));
	struct node* nodeFour = (struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter the data for 1st node: ");
	scanf("%d",&nodeOne -> data);
	
	printf("\nEnter the data for 2nd node: ");
	scanf("%d",&nodeTwo -> data);
	
	printf("\nEnter the data for 3rd node: ");
	scanf("%d",&nodeThree -> data);
	
	printf("\nEnter the data for 4th node: ");
	scanf("%d",&nodeFour -> data);
	
	nodeOne -> next = nodeTwo;
	nodeTwo -> next = nodeThree;
	nodeThree -> next = nodeFour;
	nodeFour -> next = NULL;
	
	printf("\nTraversing the linked list and the values are...\n");
	struct node* current = nodeOne;
	while(current!=NULL){
		printf("%d\t",current->data);
		current=current->next;
	}
	free(nodeOne);
	free(nodeTwo);
	free(nodeThree);
	free(nodeFour);
	return 0;
}
