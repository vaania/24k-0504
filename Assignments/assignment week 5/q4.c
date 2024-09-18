#include <stdio.h>
 int main() 
 {
	 int age;
	 char citizenship;
	 
	 printf("enter age :\n");
	 scanf("%d", &age);
	 
	 printf("enter citizenship status, y for yes, n for no :\n");
	 scanf(" %c", &citizenship);
	 
	 if (age>=18 && citizenship=='y'){
	 	printf("you are eligible to vote.\n");
	 }else {
	 	printf("you are not eligible to vote.\n");
	 }
	 return 0;
 }