#include <stdio.h>
 int main() 
 {
	 int a;
	 printf("enter a number :\n");
	 scanf("%d", &a);
	 if (a%3==0 && a%5==0){
	 	printf("the number is divisible by both 3 and 5.\n");
	 }else {
	 	printf("the number is not divisible by 3 or 5\n");
	 }
	 return 0;
 }