#include <stdio.h>
int main(){
	int age, income, creditScore;
	
	printf("Enter your age:\n");
	scanf("%d", &age);
	
	printf("Enter your monthly income:\n");
	scanf("%d", &income);
	
	printf("Enter your credit score:\n");
	scanf("%d", &creditScore);
	
	if (age>=18 && income>=70000 && creditScore>670){
		printf("You are eligible for loan.");
	}else {
		printf("you are not eligible for loan.");
	}
	return 0;
}