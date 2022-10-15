#include<stdio.h>
int main(){
	int sum=0,i,n;
	printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
    
    if(i%2==0)
    {
    	sum=sum+i;
}
		}
    printf("sum of even number %d",sum);	
	
}

