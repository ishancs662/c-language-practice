#include<stdio.h>
void printer();
extern int x=10;
int main(){
	auto int x=20;
	printer();
	printf("x in main =%d\n",x);
	if(1){
		auto int x=30;
		printf("x in if=%d\n",x);
	}
	return 0;
}
void printer(){
	printf("x in printer=%d\n",x);
}
