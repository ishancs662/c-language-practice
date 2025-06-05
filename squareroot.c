#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int main(int argc,char* argv[]){
	int x;
	int y,z; 
	scanf("%d",&x);
	x=x*x;
	printf("Squar Root is %d\n",y);
	printf("Enter the Numbers  to add\n");
	scanf("%d %d",&y,&z);
	printf("%d ",add(y,z));
	return 0;
}
