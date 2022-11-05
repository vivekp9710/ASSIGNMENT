#include<stdio.h>

 struct student 
{
	int n ;
	char name[10] ;
	int age ;
	char address[100] ;

}std;

union student1 
{
	int n ;
	char name[10] ;
	int age ;
	char address[100] ;
}std1;

int  main()
{
		printf("for structure : \n\n");
		
		printf("enter student no : ");
		scanf("%d",&std.n);
		
		printf("enter student name : ");
		scanf("%s",&std.name);
		
		printf("enter student age : ");
		scanf("%d",&std.age);
		
		printf("enter student address : ");
		scanf("%s",&std.address);
		
		printf("\n--- : structure data varible location : ---\n");	
		
		printf("\nenter student no. : %d",&std.n);
		printf("\nenter student name : %s",&std.name);
		printf("\nenter student age : %d",&std.age);
		printf("\nenter student address : %s",&std.address);
		
		printf("\n\nfor union : \n\n");
		
		printf("enter student no. : ");
		scanf("%d",&std1.n);
		
		printf("enter student name : ");
		scanf("%s",&std1.name);
		
		printf("enter student age : ");
		scanf("%d",&std1.age);
		
		printf("enter student address : ");
		scanf("%s",&std1.address);
		
		printf("\n--- : union data varible location : ---\n");	
		
		printf("\nenter student no. : %d",&std1.n);
		printf("\nenter student name : %s",&std1.name);
		printf("\nenter student age : %d",&std1.age);
		printf("\nenter student address : %s",&std1.address);		
}



