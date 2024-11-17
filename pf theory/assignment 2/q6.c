#include<stdio.h>
int matchsticks(int n){
    if (n%5==0) {
        return -1;
    }
	else{
        return n%5;
    }
}
int main(){
    int n;
    
	printf("Enter the number of matchsticks: ");
	scanf("%d", &n);
	
	matchsticks(n);
	
	int result=matchsticks(n);
	
    if (result==-1) {
        printf("-1");
    }
	else{
        printf("A should pick %d matchstick(s).\n", result);
    }
}
