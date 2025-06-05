#include<stdio.h>
int main(){
	int a[]={5,2,8,9,15,3,17,4};
	int max=a[0];
	int smax=a[0];
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<len;i++){
		if(a[i]>max){
			smax=max;
			max=a[i];
		}else if(a[i]>smax){
			smax=a[i];
                }
	}
	printf("MAX=%d\tSecond Max=%d\n",max,smax);
	return 0;
}
