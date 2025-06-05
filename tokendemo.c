#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("Enter A String\n");
	gets(str);
	char* s=strtok(str,"-");
	while(s!=NULL){
		printf("%s\n",s);
		s=strtok(NULL,"-");
	}
	return 0;
}
