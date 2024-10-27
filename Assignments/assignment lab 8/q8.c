#include<stdio.h>
int main(){

 int n, i, j;
 
  printf("Enter a number for the number of rows:");
  scanf("%d", &n);
  
  for(i=n; i>=1; i--){
    for(j=1; j<i; j++){
        printf(" "); }
       for(j=n; j>=i; j--){
           printf("* ");
        }

       printf("\n");
}
 for(i=0; i<=n; i++){
        for(j=0; j<i; j++){
        printf(" ");
    }
     for(j=n-1; j>i; j--){
        printf(" *");
     }
    
     
 printf("\n");   
}

return 0;
}