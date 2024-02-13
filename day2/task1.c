// Question: Input a character from user and print if the given character is vowel or consonent.

#include<stdio.h>
int isVowel(char c){
	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
		return 1;
	else return 0;
}
int isInvalid(char c){
	if((c>='A' && c<='Z') || (c>='a' && c<='z'))
		return 0;
	else return 1;
}
int main(){
	char input;
	printf("Enter a character: ");
	scanf("%c", &input);
	if(isInvalid(input))
		printf("Invalid input!!! Enter any alphabet");
	else if(isVowel(input))
		printf("Given character %c is a vowel", input);
	else 
		printf("Given character %c is a consonent", input);
}
