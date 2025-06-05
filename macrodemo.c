#include <stdio.h>
#define PI 3.14  //Object Like Macro
#define ADD(X,Y) X+Y
int main(){
	int x=ADD(2,3);
	double y=ADD(3.2,5.5);
	printf("x=%d\n",x);
	printf("y=%f\n",y);
	return 0;
}
