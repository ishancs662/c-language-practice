#include<stdio.h>
int add(int,int); // Prototype declaration of add function when we write main function first
int main(){
	int a=10,b=20,c;
	c=add(a,b);
	printf("%d\n",c);
	return 24;
}
int add(int x,int y){
        int c=x+y;
        //return c;
}

