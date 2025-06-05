#include<stdio.h>
int main(){
	/*//const int x=10;
	int x=10;
	printf("x=%d\n",x);
	const int *p=&x;
	// pointer to const int -> const int*
	//*p=20;
	x=20;
	printf("x=%d\n",x);
	//x=20;
	const int y;
	printf("y=%d\n",y);*/
	int z=20;
	const int* const p1=&z;
	*p1=20;
	printf("x=%d\n",*p1);
	int y=50;
	p1=&y;
	//y=35;
	return 0;
}
