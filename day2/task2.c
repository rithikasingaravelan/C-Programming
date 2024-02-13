//Question: print the first and last digit of a given number
#include<stdio.h>

//int firstDigit(int n){
	//int power = 1, temp=n, f;
	//while(temp>=10){
		//temp/=10;
		//power*=10;
	//}
	//f=n/power;
	//return f;
//}
int firstDigit(int n){
	while(n>=10){
	  n/=10;
	}
	return n;
}
int lastDigit(int n){
	n%=10;
	return n;
}
int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	int fdigit=firstDigit(num);
	int ldigit=lastDigit(num);	
	printf("First digit = %d\nLast digit = %d\n", fdigit, ldigit);
	return 0;
}


