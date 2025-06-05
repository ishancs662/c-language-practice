#include<stdio.h>
int main(){
	int x=10;
	int* p=&x;
	int** q=&p;
	int*** s=&q;
	int k=**q;
	int ****n=&s;
	//printf("%d\n",***s);
	//***s=20;
	//printf("%d\n",x);
	//printf("%d\n",****n);
	//printf("k=%d\n",k);
	//**q=20;
	//printf("x=%d\n",x);
	//return 0;
	printf("%p\n",&x);
	printf("%p\n",p);
	printf("%p\n",*q);
	printf("%p\n",&p);
	printf("%p\n",q);
	printf("%d\n",x);
	printf("%d\n",*p);
	printf("%d\n",**q);
}
