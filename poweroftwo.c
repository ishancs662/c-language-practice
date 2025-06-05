#include<stdio.h>
int main(){
	 unsigned int x;
	printf("Enter the Number\n");
	scanf("%u",&x);
	if((x&(x-1))==0){
	 	printf("Number is in the power of two\n");
	}else{
		printf("Not in the Power of 2\n");
	}
	return 0;
}
