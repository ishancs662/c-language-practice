#include<stdio.h>
#include<signal.h>
#include<unistd.h>
static void sigHandler(int sig){
	printf("Signal Handler\n");
}
int main(int argc,char* argv[]){
	int j=0;
	if(signal(SIGINT,sigHandler)==SIG_ERR){
		printf("signal\n");
	}
	signal(SIGINT,sigHandler);
	while(1){
		printf("%d\n",j);
		j++;
		sleep(3);
	}
	return(0);
}
