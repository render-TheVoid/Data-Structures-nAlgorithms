#include<stdio.h>
//function for selection sort
void selectionSort(int *nums, int numsSize){
	int indexOfMin, temp;
	printf("\nAfter Sorting...\n");
	for(int i=0;i<numsSize-1;i++){
		indexOfMin=i;
		for(int j=i+1;j<numsSize;j++){
			if(nums[j]<nums[indexOfMin]){
				indexOfMin=j;
			}
			temp=nums[i];
			nums[i]=nums[indexOfMin];
			nums[indexOfMin]=temp;
		}
	}
}
//dedicated function to print the array
void printArray(int *nums, int numsSize){
	for(int i=0;i<numsSize;i++){
		printf("%d\t",nums[i]);
	}
}
//some basic rituals :D
int main(){
	int numsSize;
	printf("Enter the size of the array: ");
	scanf("%d",&numsSize);
	int nums[numsSize];
	for(int i=0;i<numsSize;i++){
		printf("Enter the %d element of the array: ",i);
		scanf("%d",&nums[i]);
	}
	printf("Before Sorting...\n");
	printArray(nums, numsSize);
	selectionSort(nums, numsSize);
	printArray(nums, numsSize);
	return 0;
}
