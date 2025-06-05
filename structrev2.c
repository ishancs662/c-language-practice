#include<stdio.h>
struct  student{
	char gender;
	char* name;
	int age;
}*stp=NULL;
int main(int argc,char* argv[]){
	struct student st;
	stp=&st;
	stp->name="Eshan";
	stp->gender='M';
	stp->age=19;
	printf("%s\n",stp->name);
	printf("%c\n",stp->gender);
	printf("%d\n",stp->age);
	printf("%d\n",(int)sizeof(st));
	return 0;
}*/
/*struct student{
	int age;
	struct student *p;
}*stp=NULL;
int main(int argc,char** argv){
	struct student s1;
	struct student s2;
	struct student s3;
	stp=&s1;
	s1.p=&s2;
	s2.p=&s3;
	s3.p=NULL;
	s1.age=10;
	s2.age=20;
	s3.age=30;
	while(stp!=NULL){
		printf("%d\n",stp->age);
		stp=stp->p;
	}
	return 0;
}*/



