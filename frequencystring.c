#include<stdio.h>
#include<string.h>
void getFrequency(char* str){
	int k=strlen(str);
	for(int i=0;i<k;i++){
		int count=0;
		if(str[i]==' ')continue ;
		for(int j=0;j<k;j++){
			if (j>=i && str[i]==str[j])count++;
			if(j<i && str[i]==str[j]) break;
		}
		if(count>0){
			printf("%c--%d\n",str[i],count);
		}
	}
}
int main(){
	char city[]="Lucknow Junction";
	getFrequency(city);
	return 0;
}
