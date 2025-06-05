#include<stdlib.h>
#include<stdio.h>
int main(int argc,char* argv[]){
	if(argc==1){
		printf("No Arguments Passed\n");
		return 0;
	}
	/*for(int i=1;i<argc;i++){
		printf("%s\n",argv[i]);
	}*/
	int i=1;
	while(argv[i]!=NULL){
		printf("%c\n",*argv[i]);
		//printf("%f\n",atof(argv[i]));
		i++;
	}
	return 0;
}
