#include<stdio.h>
int main(){
       /* struct user{
		int  age;
                char* name;
                int salary;
        }fbuser;
        printf("%ld\n",sizeof(fbuser));
        printf("%ld\n",sizeof(struct user));*/
	struct user{
             	char* name;
		int age;
                int salary;
        }*sp=NULL;
	struct user fbuser;
	sp=&fbuser;
	sp->name="Mukesh Kumar";
	sp->age=40;
	sp->salary=10000;
	printf("%s\n",fbuser.name);
	printf("%s\n",sp->name);
        return 0;
}
