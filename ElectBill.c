#include<stdio.h>
float billCalci(float n){
	float prev;
	float current;
	float obt;
	float bill;
	printf("	Previous Unit:");
	scanf("%f",&prev);
	printf("	Current Unit:");
        scanf("%f",&current);
	obt=current-prev;
	return bill=obt*n;
}

int main(){
	float bu;
	float amt;
	float units;
	float sum=0.00;
	char* date;
	printf("-----Enter Billed Units-----\n");
	scanf("%f",&bu);
	printf("------Enter Total Amount Of Bill-----\n");
        scanf("%f",&amt);
	units=amt/bu;
	printf("Units:%f\n",units);
	printf("-------------------------");
	printf("\n");
	printf("Enter Last Date:\n");
	scanf("%s",date);
	printf("	Enter Details Of Noor\n");
	float noor=billCalci(units);
	printf("	Amount Of Bill=%f\n",noor);
	printf("	-------------------------");
	printf("\n");
	printf("	Enter Details Of Rizwan\n");
        float rizwan=billCalci(units);
	printf("	Amount Of Bill=%f\n",rizwan);
	printf("	-------------------------");
	printf("\n");
	printf("	Enter Details Of Akram\n");
        float akram=billCalci(units);
	printf("	Amount Of Bill=%f\n",akram);
	printf("	-------------------------");
	printf("\n");
	sum=noor+akram+rizwan;*/
	float saleem=amt-sum;
	printf("	Bill Of Saleem=%f\n",saleem);
	return 0;
}
