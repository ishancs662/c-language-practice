#include<stdio.h>
int main(){
	int arr[2][3]={{2,3,5},{4,8,15}};
	//printf("%ld\n",sizeof(arr));
	//printf("%ld\n",sizeof(arr[0]));
	//printf("%ld\n",sizeof(arr[0][0]));
	int rows=sizeof(arr)/sizeof(arr[0]);
	int cols=sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
