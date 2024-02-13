#include<stdio.h>
int main(){
	char name[30];
	int age;
	char highest_qualification[20];
	float percentage;
	printf("Enter Name: ");
	//fgets(name, 30, stdin);
	scanf ("%[^\n]s", name);
	printf("Enter Age: ");
	scanf("%d", &age);
	getchar();
	printf("Enter Highest Qualification: ");
	//fgets(highest_qualification, 20, stdin);
	scanf ("%[^\n]s", highest_qualification);
	//scanf("%[^\n]s", highest_qualification);
	printf("Enter Percentage: ");
	scanf("%f", &percentage);
	printf("=========================================\n");
	printf("Name: %s\nAge: %d\nHighest Qualification: %s\nPercentage of Marks obtained: %.2f\n", name, age, highest_qualification, percentage);
	return 0;
}
