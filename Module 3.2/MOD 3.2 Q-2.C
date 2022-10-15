#include<stdio.h>
int main(){
	int a=10,b=20;
	printf( "a=%d,b=%d",a,b);
	a = a+b; //a=30(10+20)
	b = a-b; //b=10(20-10)
	a = a-b; //a=20(30-10)
	printf("\nafter swap a=%d,b=%d",a,b);
	return 0;
	
}
