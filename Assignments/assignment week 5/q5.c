#include <stdio.h>
int main() {
int a, b, max;
printf("Enter two numbers:\n");
scanf("%d %d", &a, &b);
max=a>b ? a : b; printf("the maximum of these two numbers is : %d.\n", max); 
return 0;
}