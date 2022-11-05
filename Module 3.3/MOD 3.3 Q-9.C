#include<stdio.h>

struct employee{
	
	
	int empno;
	char name[10];
	char address[100];
	int age;
	}
	e[10];
	
	int main(){
		int i,n;
	     printf(" how many employee u want to enter:");
	     scanf("%d",&n);
	     
	     for(i=0;i<n;i++){
	     	
	     	printf("enter the employee details...\n");
	     	
	     	printf("\nenter the employee no:");
	     	scanf("%d",&e[i].empno);
	     	
	     	printf("enter the employee name:");
	     	scanf("%s",&e[i].name);
	     	
	     	printf("enter the employee address:");
	     	scanf("%s",&e[i].address);

            printf("enter the employee age:");
            scanf("%d",&e[i].age);
            
            printf("\n");
            
             }
             
             for(i=0;i<n;i++){
             	
             	printf("display the employee details....\n");
             	
             	printf("\n enter the employee no : %d",e[i].empno);
             	
             	printf("\n enter the employee name : %s",e[i].name);
             	
             	printf("\n enter the employee address : %s",e[i].address);
             	
             	printf("\n enter the age : %d \n",e[i].age);
			 }
}
