#include<stdio.h>
int main(int argc,char* argv[]){
	FILE* fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("Could not open\n");
		return 0;
	}
	int data;
	whie((data=fgetc(fp))!=-1){
		printf("%c",data);
	}
	fclose(fp);
	return 0;
}
