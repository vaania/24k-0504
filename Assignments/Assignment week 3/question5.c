 #include <stdio.h>
 int main() 
 {
    int principle, period;
	float rate, interest, simple_interest;
	//enter principle between 100 to 1000000
	printf("enter principle\n");
	scanf("%d", &principle);
	//enter period between 2 to 10
	printf("enter period\n");
	scanf("%d", &period);
	//enter rate between 5% to 10%
	printf("enter rate\n");
	scanf("%f", &rate);
	
	interest=principle*period*rate;
	simple_interest=interest/100;
	
	printf("simple interest is : %f", simple_interest); 
	 return 0;
 }