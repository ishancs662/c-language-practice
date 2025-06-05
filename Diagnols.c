#include<stdio.h>
int main(){
	int td[4][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9},{10,20,30,40}};
	int prim=0;
	int second=0;
	for(int i=0;i<4;i++){
		prim+=td[i][i];
		second+=td[i][3-i];
	}
	printf("Primary Diagnol=%d\n",prim);
	printf("Secondary Diagnol=%d\n",second);
	return 0;
}

