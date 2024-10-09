#include <stdio.h>

int main (){
	
	int i, j, n, ans;
	
	printf("65536, ");
	n=65536;
	j=2;
	i=0;
	while (i<8) {
		
	 ans=n/j;
   	 n=ans;
	 j++;
	 printf("%d, ", ans);
	 i++;
     
   }
	return 0;
}