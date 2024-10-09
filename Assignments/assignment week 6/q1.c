#include <stdio.h>

int main(){
	
	int n, i=0, ans;
	
	printf("Enter a number:\n");
	scanf("%d", &n);
	
	while(n>0){
		ans=n+i;
		printf("Answer after addition is: %d\n", ans);
		scanf("%d", &n);
	}
	
	return 0;
}