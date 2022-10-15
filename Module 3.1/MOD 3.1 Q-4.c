#include<stdio.h>
int main(){
	int p;
	float r,t;
	printf("enter the principal amount:");
	scanf("%d",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time of interest:(in year)");
	scanf("%f",&t);
	printf("\n simple interest %f", p*r*t/100);
	
}
