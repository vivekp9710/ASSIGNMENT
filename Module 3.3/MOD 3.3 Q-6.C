#include<stdio.h>
int main(){
	int i,j,add,sub,mul,row,col;
		
	printf("enter the row of array :");
	scanf("%d",&row);
	printf("enter the col of array :");
	scanf("%d",&col);
	
	int number1[row][col];
	int number2[row][col];
	
	printf("enter the array 1 element... \n");
    for(i=0;i<row;i++){
    for(j=0;j<col;j++){
		printf("[%d][%d]= ",i,j);
    	scanf("%d",&number1[i][j]);
	}
     printf("\n");
}
    printf("enter the array 2 element...\n");
     for(i=0;i<row;i++){
     	for(j=0;j<col;j++){
     		printf("[%d][%d] =",i,j);
     		scanf("%d",&number2[i][j]);
		 }
	printf("\n");
	 }
	 for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){

       add = number1[i][j] + number2[i][j];
	 		printf("%d \t",add);
		 }
	 printf("\n");
	 }
	 for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){

       sub = number2[i][j] - number1[i][j];
	 		printf("%d \t",sub);
		 }
	 printf("\n");
	 
}
    for(i=0;i<row;i++){
	 	for(j=0;j<col;j++){

       mul = number2[i][j] * number1[i][j];
	 		printf("%d \t",mul);
		 }
	 printf("\n");
	 


}
}
