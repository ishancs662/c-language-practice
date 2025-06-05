#include<stdio.h>
int main(){
	unsigned int x=10;
	int count=0;
	while(x!=0){
		if((x&1)==1); count++;
		x=x>>1;
	}
	printf("Number Of Ones are %d\n",count);
	return 0;
}
