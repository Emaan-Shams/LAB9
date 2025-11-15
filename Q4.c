#include<stdio.h>
int Shippingcalc(int amount, int weight);
int main(){
	int amount,weight;
	printf("Enter order amount:");
	scanf("%d", &amount);
	printf("Enter weight of order:");
	scanf("%d", &weight);
	printf("Total cost: $%d", Shippingcalc(amount,weight));
}

int Shippingcalc(int amount, int weight){
	int shipping=0;
	if(amount>100){
		printf("Free shipping!\n");
	}
	else{
		if(weight<2){
			shipping = 10;
		}
		else if(weight>1 && weight<6){
			shipping = 15;
		}
		else if(weight>5){
			shipping = 20;
		}
	}
	return (amount + shipping);
}
