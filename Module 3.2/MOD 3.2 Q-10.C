#include<stdio.h>
int main(){
	int sum=0,a,b;
	printf("enter a number");
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("%d",sum);
}
