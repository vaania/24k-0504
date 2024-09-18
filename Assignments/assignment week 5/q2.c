#include <stdio.h>
 int main() 
 {
	int x;
	printf("Enter a number x :\n");
	scanf("%d", &x);
	if (x==0){
	   printf("x is zero\n");
	}
	if (x<0){
	   printf("x is negative");
	}
    if (x>0){
	  if (x%2==0){
	    printf("x is positive and even\n");
	  }else {
	    printf("x is positive and odd");
	  }	  
	return 0;
    }
 }