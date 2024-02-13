//Question: Given a number multiple it by 2 using bitwise operator
#include<stdio.h>
int two_multiplier(int n){
	 n<<=1;
	 return n;
	
}
int main(){
	int num, mul;
	printf("Enter any number: ");
	scanf("%d", &num);
	printf("%d x 2 = %d",num, two_multiplier(num));
	return 0;
}



