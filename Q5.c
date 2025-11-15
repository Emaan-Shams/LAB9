#include<stdio.h>
float Bill(float cost, int ppl);
int main(){
	float cost;
	int ppl;
	printf("Enter food cost:");
	scanf("%f", &cost);
	printf("Enter the number of people in your group:");
	scanf("%d", &ppl);
	printf("Your total will be: $%f", Bill(cost,ppl));
	
}

float Bill(float cost, int ppl){
	float total;
	float tax=0.00,tip,servicecharge;
	tax = (8.0/100)*cost;
	if(cost>50){
		tip = (15.0/100)*cost;
	}
	else{
		tip = (10.0/100)*cost;
	}
	if(ppl>6){
		servicecharge = (5.0/100)*cost;
	}
	total = (cost+tax+tip+servicecharge);
	return total;
}
