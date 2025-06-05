#include<stdio.h>
#include<string.h>
int main(){
        char* str="Luck\\0now";
        printf("%s\n",str);
        printf("%ld\n",strlen(str));
        return 0;
}
