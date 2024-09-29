#include <stdio.h>
 int main() 
 {
	 int a, b, c;
	 
	 printf("Enter three numbers:\n");
	 scanf ("%d %d %d", &a, &b, &c);
	 
	 if (a>b){
	 	
	  if (a>c) {
	   printf("%d is the largest of three numbers.", a);
	  }else {
	     printf("%d is the largest of all three numbers.", c);  
	   }
    }
	 else if (b>c){
	 	printf("%d is the largest of three numbers.", b);
	 }else {
	 	printf("%d is the largest of three numbers.", c);
	 }
   
	 return 0;
 }