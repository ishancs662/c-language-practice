//#include<stdio.h>
//#include<stdlib.h>
int main(){
	int* p=(int*)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		printf("%d\t",p[i]);
	}
	printf("\n");
	return 0;
}
