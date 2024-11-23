#include<stdio.h>
void bubbleSort(int *nums, int numsSize){
	int temp;
	printf("\nAfter Sorting...\n");
	for(int i=0;i<numsSize-1;i++){
		for(int j=0;j<numsSize-i-1;j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
}
void printArray(int *nums, int numsSize){
	for(int i=0;i<numsSize;i++){
		printf("%d\t", nums[i]);
	}
}
int main(){
	int numsSize;
	printf("Enter the size of the array: ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	printf("\n");
	for(int i=0;i<numsSize;i++){
		printf("Enter the %d element of the array: ", i);
		scanf("%d",&nums[i]);
	}
	printf("Before Sorting...\n");
	printArray(nums, numsSize);
	bubbleSort(nums, numsSize);
	printArray(nums, numsSize);
	return 0;
}
