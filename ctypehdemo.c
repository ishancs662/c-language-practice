#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(int argc,char* argv[]){
	char name[]="Lucknow Junction";
	char* new1;
	printf("Enter Number\n");
	double d,result;
	scanf("%lf",&d);
	result=sqrt(d);
	printf("%lf\n",result);
	/*for(int i=0;i<strlen(name);i++){
		new1=isgraph(name[i]);
		if(isalpha(name[i])){
			name[i]=toupper(name[i]);
		}
	}
	printf("%s\n",name);
	printf("%s\n",new1);*/
	return 0;
}
