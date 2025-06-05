#include<stdio.h>
int main(){
        int arr[][4]={{2,3,5},{4,8},{10,20,30,40}};
        int rows=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<rows;i++){
		int cols=sizeof(arr[0])/sizeof(arr[0][0]);
                for(int j=0;j<cols;j++){
                        printf("%d\t",arr[i][j]);
                }
                printf("\n");
        }
        return 0;
}
