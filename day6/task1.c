//Question: Write a C program to find all prime numbers between given interval using functions.
#include<stdio.h>
#include<math.h>
int isPrime(int num){
	if(num == 0 || num==1)
	{
		return 0;
	}
	else
	{
		//can check upto num or num/2 or sqrt(num)
		for(int i=2; i<=sqrt(num); i++)
		{
			if(num%i==0)
				return 0;
		}
	}
	return 1;
}
int main(){
	int start, end;
	printf("Enter starting interval: ");
	scanf("%d", &start);
	printf("Enter ending interval: ");
	scanf("%d", &end);
	printf("===================================================\n");
	if(start<0 && end<0)
		printf("Invalid input!!!");
	else
	{
		if(start<0 && end >0)
			start=1;
		for(int i=start; i<=end; i++)
		{
			if(isPrime(i))
				printf("%d ", i);
	  	}
	}
	return 0;
}
