#include<stdio.h>
/*int main(int argc,char* argv[]){
	int i=1;
	if(argc==1){
		printf("Incorrect Ussage\n");
		return 0;
	}
	while(argv[i]!='\0'){
		printf("%s\n",argv[i]);
		i++;
	}
	return 0;
}*/
int main(int argc,char* argv[],char** envp){
	int i=0;
	while(envp[i]!=NULL){
                printf("%s\n",envp[i]);
                i++;
        }
        return 0;
}
