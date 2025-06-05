#include<stdio.h>
void printer();
//extern int x;// can't be initialized here
int main(){
	//x=20;
	extern int x;
	printf("x in main=%d\n",x);
	printer();
	return 0;
}
void printer(){
	extern int x;
	printf("x in printer=%d\n",x);
}
