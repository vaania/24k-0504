#include <stdio.h>

 int main (){
	
   int n, i, ans=1;
   
   printf("Enter a number:\n");
   scanf("%d", &n);
   i=2;
   
   while(i<n){
   	if(n%i==0){
   	 ans=0;
   	 break;
	}
    i++;
 }if (ans==0){
	  printf("the number is a composite number.");
   }else {
   	  printf("the number is a  prime  number.");
   }
	return 0;
 }