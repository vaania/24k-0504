#include <stdio.h>

int main(){
	
	int n, sum;
	int i=0;
	printf("Enter a number :\n");
	scanf("%d", &n);
	while(n>0){
    	n=n/10;
		i++;
	}if (i>1){
		printf("the number is a multiple digit number.");
	}else {
		printf("the number is not multiple digit number.");
	}
	
	return 0;
}