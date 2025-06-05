#include<stdio.h>
int main(){
        FILE* fpr=fopen("A.jpeg","r");
        FILE* fpw=fopen("copy.jpeg","w");
        int data;
        while((data=fgetc(fpr))!=EOF){
                fputc(data,fpw);
        }
        fclose(fpr);
        fclose(fpw);
        return 0;
}
