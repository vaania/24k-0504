/* 
* Name: Vaania Ahmed
* Date: 09-09-2024
* Desc: Checking whether a number is a multiple of 3
*/

#include <stdio.h>

int main(){
  int n;
 printf("enter a number");
 scanf("%d", &n);
 if(n%3==0) {
   printf("the number is a multiple of 3");
 }
 else{
   printf("the number is not a multiple of 3");
 }

}