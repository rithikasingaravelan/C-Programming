#include <stdio.h>

int main() {
	char name[20], adr[100];
	char value[50];
	printf("Enter Name: ");
	scanf("%[^\n]s", name);
	getchar();
	printf("Enter address: ");
	scanf("%[^\n]s", adr);
	char door_no[10], street[20], city[20], pincode[10];
	sscanf(adr,"%s %s %s %s", door_no, street, city, pincode);
	sprintf(value,"Name: %s\n",name);
	printf("%s",value);
	printf("Address: \n%s\n%s\n%s\n%s", door_no, street, city, pincode);
	return 0;

}
