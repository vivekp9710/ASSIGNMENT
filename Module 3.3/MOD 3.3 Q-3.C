#include<stdio.h>
void revs(char *str)
{
	if(*str){
		revs(str+1);
		printf("%c",*str);
	}
}
int main(){

	char str[] = "vivek";
	revs(str);
	return 0;
}




