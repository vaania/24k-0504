/*
* Name: Vaania Ahmed
* Date: 09-09-2024
* Desc: Calculator for operator
*/
#include <stdio.h>
int main () {
  char operator;
  int number1;
  int number2;
  
  printf("enter number 1");
  scanf("%d", &number1);

  printf("enter number 2");
  scanf("%d", &number2);

  printf("enter operator");
  scanf(" %c",&operator);
  
  switch (operator) {
     case '+':
          printf("answer is %d", number1+number2);
          break;
     case '-':
          printf("answer is %d", number1-number2);
          break;
     case '*':
          printf("answer is %d", number1*number2);
          break;
     case '/':
          printf("answer is %d", number1/number2);
          break;
                   }
}