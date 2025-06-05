#include<stdio.h>
#include<stdlib.h>
int main(){
	typedef struct{
		char* name;
		char* location;
	}loc;
	struct student{
		char* name;
		int age;
		loc* lp;
	}stu;
	stu.name="Sumit Kumar";
	stu.age=45;
	(stu.lp)=(loc*)malloc(sizeof(loc));
	(stu.lp)->name="Integral University";
	(stu.lp)->location="Lucknow";
	printf("%s\n",(stu.lp)->name);
}
