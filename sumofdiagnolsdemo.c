#include<stdio.h>
int main(){
        int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int sum=0;
        int rows=sizeof(arr)/sizeof(arr[0]);
        for(int i=rows;i>0;i--){
               /* int cols=sizeof(arr[0])/sizeof(arr[0][0]);
                for(int j=0;j<cols;j++){
			//if(i==j){
			if(i+j==3){
				sum+=arr[i][j];
			}
                }*/
		sum+=arr[i][i];

        }
	printf("Sum of 	Primary Diagnol=%d\n",sum);
        return 0;
}
