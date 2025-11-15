#include<stdio.h>
int AlertCode(int temp);

int main(){
	int temp;
	printf("Enter room temperature in Celsius:");
	scanf("%d", &temp);
	switch(AlertCode(temp)){
		case 1:
			printf("HEAT ALERT");
			break;
		case 2:
			printf("COLD ALERT");
			break;
		case 3:
			printf("COMFORT ZONE");
			break;
		case 4:
			printf("NORMAL CONDITIONS");
			break;
	}	
}
int AlertCode(int temp){
 	if(temp>35){
 		return 1;
	 }
	 else if(temp<10){
	 	return 2;
	 }
	 else if(temp>14 && temp<26){
	 	return 3;
	 }
	 else{
	 	return 4;
	 }
 }
