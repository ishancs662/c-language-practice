#include<stdio.h>
union student{
	char* name;
	int age;
	union address{
		char* city;
		char* country;
	}adr;
}stu;
int main(){
	printf("%d\n",(int)sizeof(stu.adr));
}
