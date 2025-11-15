#include<stdio.h>
float Taxcalc(float income);
int main(){
	float income;
	printf("Enter your income:");
	scanf("%f",&income);
	Taxcalc(income);
}

float Taxcalc(float income){
	float netincome,tax=0.00;
	if(income>0.0 && income<=20000.0){
		tax = 0.0;
	}
	else if(income>20000.0 && income<=50000.0){
		tax = (10.0/100)*(income-20000);
	}
	else if(income>50000){
		tax=(20.0/100)*((income-50000.0)+((10.0/100)*40000.0));
	}
	netincome = income - tax;
	printf("Total apllied tax= $%f\n",tax);
	printf("Net income: $%f", netincome);
}
