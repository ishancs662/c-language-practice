#include<stdio.h>
#include<string.h>
int main(){
	/*char* str1="Lucknow";
	char* str2="Lucklater";
	//printf("%d\n",strcmp(str1,str2));
	printf("%d\n",strncmp(str1,str2,4));*/
	/*char* str="Lucknow Junction";
	char ch='n';
	char* p1=strchr(str,ch);
	char* p2=strrchr(str,ch);
	printf("%s\n",p1);
	printf("%s\n",p2);
	char* p3=strchr(str,'a');
	if(p3==NULL){
		printf("P3 Is Null\n");
	}*/
	/*char* str="Lucknow Junction";
	char* str2="now";
	char* p=strstr(str,str2);
	printf("%s\n",p);
	char* str3="nowJ";
	char* p2=strstr(str,str3);
	if (p2==NULL) printf ("p2 is Null\n");*/
	/*char str[20]="Lucknow";
	char* st=" Junction";
	char* p=strcat(str,st);
	printf("%s\n",p);
	char* p2=strncat(str,"East",2);
	printf("%s\n",p2);*/
	char str[20]="Lucknow";
        char* st=" Junction";
        char* p=strcpy(str,st);
        printf("%s\n",p);
        char* p2=strncpy(str,"East",2);
        printf("%s\n",p2);
	return 0;
}
