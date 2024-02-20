//Question: Write a C program to display all array elements using recursion.
#include<stdio.h>
void printArray(int size, int arr[]){
	if(size>=0){
		printArray(size-1, arr);
		printf("%d ", arr[size]);
	}
}
int main(){
	int size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the array elements\n");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("===================================================\n");
	printArray(size-1, arr);
	return 0;
}
