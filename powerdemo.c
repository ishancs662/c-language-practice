#include<stdio.h>
/*int power(int x,int n){
	if(n==0) return 1;
	if(n==1) return x;
	return x*power(x,n-1);
}*/
long power(unsigned int x,unsigned int n){
	long result=1;
	for(int i=1;i<=n;i++){
		result=result*x;
	}
	return result;
}
int main(){
	unsigned int n;
	 unsigned int x;
	printf("Enter Number and Its Power\n");
	scanf("%u",&x);
	scanf("%u",&n);
	long result=power(x,n);
	printf("%d\n",result);
	return 0;
}
