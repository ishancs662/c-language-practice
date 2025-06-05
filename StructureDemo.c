#include<stdio.h>
int main(){
	struct citizen{
		char* name="Lucknow";
		static int age;
		char* location;
	}rahul={"Rahul Rao",25,"Lucknow"};
	printf("%s\n",rahul.name);
	rahul.age=27;
	printf("%d\n",rahul.age);
	return 0;
}
