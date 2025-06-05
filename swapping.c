#include<stdio.h>
void printArray(int a[],int len){
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}printf("\n");
}
int main(){
	int a[]={5,2,8,9,15,3,17,4};
	int len=sizeof(a)/sizeof(a[0]);
	int i=0,j=len-1,temp=0;
	printf("Array Before Reversing:\n");
	printArray(a,len);
	while(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("Array After Reversing:\n");
	printArray(a,len);
	return 0;
}
