
void copy(char*);
#include<stdio.h>
int main(int argc,char* argv[]){
        if(argc<2){
                printf("Correct Usage: Command <inputfile> <outputfile>\n");
                return 0;
        }
        copy(argv[1]);
        return 0;
}
void copy(char* destination){
        FILE* fr=fopen(destination,"w");
        if(fr==NULL){
                printf("Could Not Open\n");
        }
        else{
		int data;
                while((data=getchar())!='#'){
                        fputc(data,fr);
                }
                fclose(fr);
        }
}

