#include<stdio.h>
/*int main(){
	typedef struct{
		char* name;
		int age;
		char* college;
	}student;
	student mukesh;
	printf("%ld\n",sizeof(student));
	return 0;
}*/
#include<stdlib.h>
typedef struct{
	char* name;
	int age;
	char* college;
	}student;
int main(int argc,char*argv[]){
	student *stu=(student*)malloc(sizeof(student));
	stu->name="Mukesh Kumar";
	stu->age=30;
	stu->college="IUL";
	printf("Name is %s\n",stu->name);
	printf("Age is %d\n",stu->age);
	printf("College is %s\n",stu->college);
	return 0;
}
