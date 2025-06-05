#include<stdio.h>
int main(){
	int a[]={2,5,7,9,15};
	int max=a[0];
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<len;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Maximum Number=%d\n",max);
	return 0;
}
