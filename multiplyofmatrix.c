#include<stdio.h>
int main(){
	int arr[3][2]={{2,4},{7,5},{1,3}};
	int brr[2][3]={{5,4,1},{3,9,10}};
	int crr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			crr[i][j]=0;
			for(int k=0;k<2;k++){
				crr[i][j]+=arr[i][k]*brr[k][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",crr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
