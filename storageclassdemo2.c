#include<stdio.h>
static int x=10;
void printer(){
	//static int x=10;
	printf("x=%d\n",x);
	x++;
}
int main(){
	printer();
	printer();
	printer();
	printf("x=%d\n",x);
	return 0;
}
