#include<stdio.h>
  main(){
  	 char ch;
  	 printf("enter any alphabet : ");
  	 scanf("%c",&ch);
  	 
  
  switch(ch){
  	
  	case 1 : printf("a");
  	break;
  	case 2 : printf("e");
  	break;
  	case 3 : printf("i");
  	break;
  	case 4 : printf("o");
  	break;
  	case 5 : printf("u");
  	break;
  	default:printf("consonant");
  	
  }
  return 0 ; 
}
