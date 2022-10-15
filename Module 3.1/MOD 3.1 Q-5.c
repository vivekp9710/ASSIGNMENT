#include<stdio.h>
 int main(){
 	int year;
 	printf("enter a year: ");
 	scanf("%d",&year);
   if(year%4==0&&year%400==0||year%100==0){
   printf("The Given Year is a leap year..",&year);
   }else{
   	printf("The Given Year is not a leap year..",&year);
   }
}
