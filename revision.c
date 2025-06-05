#include<stdio.h>
#include<string.h>
char* strcpyy(char* a,char* b){
	for(int i=0;i<len;i++){
			 a[i]=b[i];
	}
	return a;
}
int main(){
	/*char* str="Lucknow";
	/*int count=-1;
	while(str[++count]!='\0');
	 printf("Length is=%d\n",count);*/
	/*int count=0;
	int k=strlen(str);
	for(int i=0;i<k;i++){
		for(int j=1;j<=k;j++){
			if(str[i]!=str[j]) break;
			else count++;
		}
	printf("Count of %s=%d\n",str[i],count);
	}*/
	char name[]="Lucknow";
	char city[]="Kanpur";
	printf("%s\n",strcpyy(name,city));
	printf("%d\n",strcmp(name,city));
	return 0;
}

