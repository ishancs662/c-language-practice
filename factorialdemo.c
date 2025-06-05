#include<stdio.h>
/*long factorial(unsigned int n){
	if(n==0 || n==1) return 1;
	return n*factorial(n-1);
}*/
long factorial(unsigned int n){
	long result=1;
	for(int i=n;i>0;i--){
		result=result*i;
	}
	return result;
}
int main(){
	unsigned int x;
	printf("Enter A Positive Number\n");
	scanf("%u",&x);
	long result=factorial(x);
	printf("factorial of %u\t is %ld\n",x,result);
	return 0;
}
