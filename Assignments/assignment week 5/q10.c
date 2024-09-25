#include <stdio.h>
 int main() 
 {
	 int n;
	 int sum, lastDigit;
	 printf("Enter a number:\n");
	 scanf("%d", &n);
	 
	 sum=0;
	  do {
	  lastDigit=n%10;
	  sum=sum+lastDigit;
	  n=n/10;
      } while(n>0);
      printf("sum = %d", sum);
	 return 0;
 }