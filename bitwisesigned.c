#include<stdio.h>
int main(){
	char x= -10;
	//char y=(char) (x>>1);
	//char a=(char)(x>>2);
	//char b=(char)(x>>3);
	 char y=(char) (x<<1);
	 char a=(char) (x<<2);
	 char b=(char) (x>>3);
	printf("%d\n",y);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
