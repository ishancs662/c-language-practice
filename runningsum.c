#include<stdio.h>
void printArray(int a[],int len){
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
        int arr[]={2,5,7,9,15};
	int pos;
        int len =sizeof(arr)/sizeof(arr[0]);
       scanf("Enter Position=%d\n",&pos);
       for(int i=pos;i<=1;i--){
		arr[i]=arr[i-1]+arr[i];
        }
	printArray(arr,len);
        return 0;
}
