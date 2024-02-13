#include <stdio.h>

int main() {
	char name[20], adr[100];
	printf("Enter name: ");
	//fgets(name, 30, stdin);
	scanf("%[^\n]s", name);
	getchar();
	printf("Enter address: ");
	//fgets(adr, 100, stdin);
	scanf("%[^\n]s", adr);
	printf("===========================\n");
	printf("Name: %s\nAddress:\n",name);
	int i=0;
	while(adr[i]!='\0'){
	  if(adr[i]==',') printf(",\n");
	  else
	   printf("%c", adr[i]);
	  i++;
	}
	return 0;

}
