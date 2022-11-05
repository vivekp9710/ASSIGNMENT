#include<stdio.h>
int main(){
	int n,sum=0,firstdigit,lastdigit;
	printf("enter the sum of first and last digit =");
	scanf("%d",&n);
	//find last digit of a number
	lastdigit=n%10;
	while(n>=10){ //find first digit By dividing n by 10 and until n is greater than 10
		n=n/10;
		
	}
	firstdigit=n;
	sum= firstdigit + lastdigit;
	printf("sum of first digit and last digit %d",sum);
	
	
}
