#include<stdio.h>
int main(){
	int option;
	//char option;
	printf("Enter Option's Value\n");
	scanf("%d",&option);
	switch(option){
		case 'A':
			printf("Case 3\n");
			break;
		case 'B':
			printf("Case 1\n");
			break;
		default:
			printf("Default Case\n");
			break;
		case 10:
			printf("case 2\n");
		break;
		case 'D':
			printf("case 1\n");
		break;
	}
	return 0;
}
