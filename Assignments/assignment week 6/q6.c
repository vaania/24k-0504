#include <stdio.h>

int main(){
	
	int n=1, sum;
	int i, j;
	printf("1,2,");
	
	for(i = 1, j = 2; n<=7; n++){
		
		sum=i*j;
		i=j;
		j=sum;
		printf("%d,", sum);
		
	}
	return 0;
}