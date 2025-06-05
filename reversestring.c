#include<stdio.h>
#include<string.h>
void reverse(char* name){
	int i=0;
	int j=strlen(name)-1;
	char temp;
	while(i<j){
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
		i++;
		j--;
	}
}
int main(){
	char* name="LucknowMeAapkaSwagat";
	printf("%s\n",name);
	reverse(name);
	printf("%s\n",name);
	return 0;
}
