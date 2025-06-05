#include<stdio.h>
struct user{
                char* name;
		int age;
                char* password;
                //char* gender;
                //int age;
        } guser[2] ={{"Ali","privacy","F",24},{"Ishan","Integralwala","M",23}};
int main(int argc,char* argv[]){
	/*struct user guser;
	guser.name="Albela";
	guser.password="integral";
	guser.gender="M";
	guser.age=20;*/
	printf("%s\n",(int)sizeof(user));
	printf("%s\n",guser[1].password);
	printf("%s\n",guser[0].gender);
	printf("%d\n",guser[0].age);
	printf("%s\n",guser[1].name);
        printf("%s\n",guser[0].password);
        printf("%s\n",guser[1].gender);
        printf("%d\n",guser[1].age);

	return 0;
}
