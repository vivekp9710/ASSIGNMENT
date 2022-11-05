#include<stdio.h>
int main(){
	char string[50];
	int i,length;
	printf("enter the string: \n");
    scanf("%s",string);
    for(i=0;string[i] != '\0'; ++i);
    	printf(" length of input string is %d \n",i);
}

