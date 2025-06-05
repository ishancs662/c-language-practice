#include<stdio.h>
int main(){
	register int i=0;
	while(i<10){
		printf("i=%d\n",i);
		i++;
	}
	//int *p=&i;
	return 0;
}
