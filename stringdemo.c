#include<stdio.h>
int main(){
	char name[]={'L','u','c','k','n','o','w'};
	char city[]="Lucknow";
	char *location="Lucknow";
	//printf("%s\n",city);
	//printf("%s\n",location);
	location ="Kanpur";
	//printf("%s\n",location);
	printf("%s\n",name);
	city[0]='T';
	//printf("%s\n",city);
	//location[0]='T';// Run Time Error
	printf("%s\n",location);
	return 0;
}
