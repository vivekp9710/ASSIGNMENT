#include<stdio.h>

int max(int m,int n[])
     {
     	int i,max=0;
     	for(i=0;i<m;i++){
     		if(max<n[i]){
     			max=n[i];
     			
			 }
		 }
		 return max;
	 }

int main(){
	
		int n=5 ;
	int a[n],i ;
	 
	printf("Enter the Array value :\n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d element is:",i);
		scanf("%d",&a[i]);
	}
	int m = max(n,a);
	printf("\n Max element in array = %d",m);
	
	
	
	
	
	
	
	
	
}

	

	
	
