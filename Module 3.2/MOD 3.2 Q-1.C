#include<stdio.h>
int main(){
	char Operator;
	float num1,num2,result;
	printf("enter the operators like ....+,-,*,/,%");
	scanf("%c",&Operator);
	printf("Enter the digits..twice..\n");
	scanf("%f%f",&num1,&num2);
	
	switch (Operator)
	{
		case '+':
		    result = num1 + num2;
		break;
		
		case'-':
			result = num1 - num2;
		break;
		
		case'*':
			result = num1 * num2;
	    break;
	    
	    case '/':
	    	result = num1 / num2;
	    break;
	    
	    		default:
	    		printf("\n invalid operator");
		}
	printf("value is %f",result);
}
