#include<stdio.h>
int Transactions(int remainingLimit, int amount);
int main(){
	int remainingLimit=5000 ,amount;
	printf("Enter the amount you want to transact:");
	scanf("%d", &amount);
	printf("Remaining Limit: %d",Transactions(remainingLimit,amount));
}
int Transactions(int remainingLimit, int amount){
	if(amount<=remainingLimit){
		remainingLimit-=amount;
		printf("Transaction APPROVED.\n");
	}
	else{
		printf("Transaction DECLINED.\n");
	}
	return remainingLimit;
}
