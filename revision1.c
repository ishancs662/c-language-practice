#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int* p=(int*)malloc(sizeof(int));
	*p=25;
	/*printf("%d\n",*p);
	free(p);
	p=NULL;
	printf("%d\n",*p);*/
	//int* p=(int*)calloc(5,sizeof(int));
	/*for(int i=0;i<5;i++){
		p[i]=i;
	}
	for(int i=0;i<5;i++){
		printf("%d\t",p[i]);
	}
	printf("\n");*/
	long* q=(long*)realloc(p,sizeof(long));
	printf("%ld\n",*q);
	return 0;
}
