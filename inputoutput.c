#include<stdio.h>
int main(){
	/*printf("Enter Characters\n");
	int data;
	while((data=getchar())!='#'){
		putchar(data);
	}*/
	FILE* fp=fopen("sample.txt","r");
	int data;
	while((data=fgetc(fp))!=EOF){
		putchar(data);
	}
	fclose(fp);
	return 0;
}
