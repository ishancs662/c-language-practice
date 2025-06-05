#include<stdio.h>
int main(){
	unsigned int a=10;
	if((a&1)==0){
		printf("A is Even\n");
	}else{
		printf("A is Odd\n");
	}
	return 0;
}
