#include <stdio.h>

 int even_odd(int (x));

 int main(){
  int x, result;
 
  printf("Enter a number to check whether even or odd:");
  scanf("%d", &x);
 
  result= even_odd(x);
  if(result){
  printf("%d is an even number.", x);
}else{
printf("%d is a odd number.", x);
}
return 0;
}
 int even_odd(int x){
 
  if(x%2==0){
  return 1;
 
}else{
return 0;
}
}