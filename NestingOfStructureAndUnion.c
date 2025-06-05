#include<stdio.h>
int main(){
	struct student{
		char* name;
		int age;
		union college{
		//struct college{
			char* name;
			char* location;
		}col;
	};
	struct student stu;
	printf("%d\n",(int)sizeof(stu));
	stu.name="Amit Kumar";
	stu.col.name="Integral University";
	printf("%s\n",stu.col.name);
	//stu.col= (*col)malloc(sizeof(stu.struct college);
	return 0;
}
