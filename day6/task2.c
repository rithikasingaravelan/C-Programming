//Question: Write a C program to find power of any number with and without recursion.
#include<stdio.h>
#include<stdlib.h>
int powerWithoutRecursion(int num1, int num2){
	int mul=1;
	for(int i=1; i<=num2; i++){
		mul*=num1;
	}
	return mul;
}
int powerWithRecursion(int num1, int num2){
	if(num2){
		return num1*powerWithRecursion(num1, num2-1);
	}
	return 1;
}
int main(){
	int num1, num2;
	printf("Enter the base: ");
	scanf("%d", &num1);
	printf("Enter the exponent: ");
	scanf("%d", &num2);
	//condition for 0 power 0 
	printf("===================================================\n");
	if(num1==0 && num2==0){ 
		printf("%d power %d is undefined", num1, num2);
	}
	//condition for negative exponent 
	else if(num2<0){
		num2=abs(num2);
		float res1 = (float)1/(powerWithoutRecursion(num1, num2));
		float res2 = (float)1/(powerWithRecursion(num1, num2));
		printf("%d ^ %d Without recursion: %f\n",num1, num2, res1);
		printf("%d ^ %d Without recursion: %f\n",num1, num2, res2);
	}
	//condition for negative base and both positive
	else{
		printf("%d ^ %d Without recursion: %d\n",num1, num2, powerWithoutRecursion(num1, num2));
		printf("%d ^ %d With recursion: %d\n",num1, num2, powerWithRecursion(num1, num2));
	}
	
	return 0;
}
