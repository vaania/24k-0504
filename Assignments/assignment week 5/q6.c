#include <stdio.h>
 int main() 
 {
	 int number;
	 
	 printf("enter a number :\n");
	 scanf("%d", &number);
	 
	(number > 0) ? printf("The number is: Positive\n") : (number < 0) ? printf("The number is: Negative\n") : printf("The number is: Zero\n");
	 
	 return 0;
 }