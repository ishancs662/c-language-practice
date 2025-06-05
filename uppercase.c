#include<stdio.h>
#include<string.h>
int main(){
	//char name[]="Lucknow Junction";
	/*for(int i=0;i<=strlen(name);i++){
		/*if(name[i]>='a' && name[i]<='z'){
			name[i]=name[i]^32;
		}
		if(name[i]==32)continue;
		name[i]=name[i]^32;
	}*/
	char name[]="My Name is Anthony";
	/*int i=0;
	int j=strlen(name)-1;
	char temp;
	while(i<=j){
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
		i++;
		j--;
	}*/
	char* w=" ";
	for(int i=0;i<0;i--){
		if(name[i]==32){
			w=name[i]+w;
			int i=0;
        		int j=strlen(w)-1;
        		char temp;
       		 	while(i<=j){
                		temp=w[i];
                		w[i]=w[j];
                		w[j]=temp;
                		i++;
                		j--;
        		}
		}
	}
	printf("%s\n",name);
	return 0;
}
