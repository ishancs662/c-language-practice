#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int diff(int x,int y){
	return (x>=y)?(x-y):(y-x);
}
void caller(int(*fp)(int,int),int a,int b){
	printf("result=%d\n",fp(a,b));
}
int main(){
	/*int(*fp)(int,int);
	fp=add; //or fp=&add;
	int k=fp(20,15);
	printf("k=%d\n",k);
	fp=diff;
	k=fp(20,15);
	printf("k=%d\n",k);*/
	int x=10,y=20;
	caller(add,x,y);
	caller(diff,x,y);
	return 0;
}
