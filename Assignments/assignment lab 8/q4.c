#include <stdio.h>

 int main (){
 	
    int start, end, i, j, isPrime;
    
    printf("Enter the range in which you want to find prime numbers (two numbers) : ", start, end);
    scanf("%d %d", &start, &end);
    
    for(i=start; i<=end; i++){
    	isPrime=1;
    	for(j=2; j*j<=i; j++){
    		if (i % j == 0){
    			isPrime=0;
    			break;
			}
			if(isPrime){
				printf("%d\n", i);
			}
		}
	} printf("\n");
 	
 	return 0;
 }