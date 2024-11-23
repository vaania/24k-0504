#include <stdio.h>

int digitSum(int n){
		if (n<10){
			return n;
		}else
		return (n%10) + digitSum(n/10);
	}
int main (){
	
	int n;
	
	printf("Enter a number:\n");
	scanf("%d", &n);
	
	printf("The sum is:%d", digitSum(n));
	
	
	return 0;
}
