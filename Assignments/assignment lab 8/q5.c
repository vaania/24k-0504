#include <stdio.h>

 int main (){
 	
  int num,i,j;
  
  printf("Enter the number you want to generate pattern from:");
  scanf("%d", &num);
  
  if(num%2==0){
  	num--;
  }
  for(i=num; i>=1; i-=2){
  	    
  		for(j=num; j>=i; j-=2){
  			
  			printf("%d", j);
  		
		  }printf("\n");
  }
   
 	
 	return 0;
 }