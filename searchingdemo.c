#include<stdio.h>
int linearSearch(int*,int,int);
int binarySearch(int*,int,int,int);
int main(){
	int arr[]={15,7,9,25,8,39,54,79};
	int len=sizeof(arr)/sizeof(arr[0]);
	int element;
	printf("Enter Element To Be Searched\n");
	scanf("%d",&element);
	//int result=linearSearch(arr,len,element);
	int result=binarySearch(arr,0,len-1,element);
	if(result==-1){
		printf("Not Found\n");
	}
	else{
		printf("Found at %d\n",result);
	}
	return 0;
}
int linearSearch(int* a,int len,int element){
	int result=-1;
	for(int i=0;i<len;i++){
		if(a[i]==element){
			return result=i;
			break;
		}
	}
	return -1;
}
int binarySearch(int* a,int fe,int le,int element){
	if(fe<=le){
		int mid=fe+le/2;
		if(a[mid]==element){
			 return mid;
		}
		else if(a[mid]>element){
			return binarySearch(a,fe,mid-1,element);
		}
		else{
			return binarySearch(a,mid+1,le,element);
		}
	}
	return -1;
}
