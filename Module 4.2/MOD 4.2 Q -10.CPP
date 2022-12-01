// wap to concenate the two string using operator overloading//

#include<iostream>
#include<string.h>
using namespace std;

class Addstring{
	
	public:
		
		char s1[20],s2[20];

      Addstring(char str1[],char str2[]){
      	
      	
      	strcpy(this->s1,str1);
      	strcpy(this->s2,str2);
      	
	  }
	  void operator + (){
	  	cout<<"\n concenation :"<<strcat(s1,s2);
	  	
	  }

};

   int main(){
   	
   	char str1[]= "vivek";
   	char str2[]= "patel";
   	
   	
   	Addstring a1(str1,str2);
   	+a1;
   	return 0;
   }
