#include<stdio.h>
int main(){
	int i=0;
	if(i<10){
		printf("%d<10\n",i);
		printf("Again Checking Condition\n");
		while(i<10);
		}
	else{
		printf("Inside Else");
		}
	return 0;
}
