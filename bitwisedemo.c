#include<stdio.h>
int main(){
	unsigned char a=10;
	unsigned char b=12;
	unsigned char c=(char) a&b;
	unsigned char d=(char) a|b;
	unsigned char e=(char) a^b;
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);
	return 0;
}
