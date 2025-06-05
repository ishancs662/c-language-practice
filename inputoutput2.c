#include<stdio.h>
int main(){
	FILE* fpr=fopen("sample.txt","r");
	FILE* fpw=fopen("copy.txt","a+");
	int data;
	while((data=fgetc(fpr))!=EOF){
		fputc(data,fpw);
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
}
