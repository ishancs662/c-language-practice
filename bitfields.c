#include<stdio.h>
struct protocol{
	unsigned int msk : 4;
	unsigned int checksum : 3;
}tcp;
int main(){
	tcp.msk=15;
	printf("%d\n",tcp.msk);
	tcp.msk=17;
	printf("%d\n",tcp.msk);
	printf("%d\n",(int)sizeof(tcp));
	return 0;
}

