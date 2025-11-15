#include<stdio.h>
float StudentReport(int m1, int m2, int m3);
int main(){
	int m1,m2,m3,i;
	printf("Enter marks of subject 1:\nEnter marks of subject 2:\nEnter marks of subject 3:\n");
	scanf("%d %d %d",&m1,&m2,&m3);
	printf("Average is: %f", StudentReport(m1,m2,m3));
}
float StudentReport(int m1, int m2, int m3){
	float avg;
	avg = (m1+m2+m3)/3.0;
	if(avg>=50.0 && m1>=40 && m2>=40 && m3>=40){
		printf("PASS\n");
	}
	else{
		printf("FAIL\n");
	}
	return avg;
}
