#include<stdio.h>
#include<string.h>
//int getLength(char*);
int main(){
	char name[]="Adani";
	//int len=getLength(name);
	int len=strlen(name);
	printf("Length=%d\n",len);
	return 0;
}
/*int getLength(char* s){
	int len=0;
	while(s[len]!='\0'){
		len++;
	}
	return len;
}





































/*int main(){
	char name[]="Mukesh";
	int length=0;
	while(name[length]!='\0'){
		length++;
	}
	printf("Length Of String=%d\n",length);
}*/
