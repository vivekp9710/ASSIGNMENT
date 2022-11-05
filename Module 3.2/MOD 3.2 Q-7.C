#include<stdio.h>
int main(){
	int x=0,y=1,z,i,num;
	printf("enter the elements");
	scanf("%d",&num);
	printf("\n %d%d",x,y);//printing 0 and 1
	for(i=2;i<num;++i){ //loop starts from 2 becoz 0 and 1 are already printed
		z=x+y;
		printf(" %d",z);
		x=y;
	    y=z;
	}
	return 0 ;
}


