#include<stdio.h>
int main(){
	char name[50];
	printf("Enter a Name\n");
	scanf("%[^\n]s",&name[0]);
	printf("name is %s\n",name);
	return 0;
}
