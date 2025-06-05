#include<stdio.h>
void copy(char*,char*);
int main(int argc,char* argv[]){
	if(argc<3){
		printf("Correct Usage: Command <inputfile> <outputfile>\n");
		return 0;
	}
	copy(argv[1],argv[2]);
	return 0;
}
void copy(char* source,char* destination){
	FILE* fp=fopen(source,"r");
	FILE* fr=fopen(destination,"w");
	if(fp==NULL || fr==NULL){
		printf("Could Not Open\n");
	}
	else{
		int data;
		/*while((data=fgetc(fp))!=-1){
			fputc(data,fr);
		}
		fclose(fp);
		fclose(fr);
	}
}
