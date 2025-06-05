#include<stdio.h>
int max(int x,int y){
	return (x>=y)?x:y;
}
int main(){
	int a=10;
	int b=20;
	int k=(a<=b)?a:b;
	int m =max(5,7);
	printf("%d\n",k);
	printf("%d\n",m);
	return 0;
}
