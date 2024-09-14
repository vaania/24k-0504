 #include <stdio.h>
 int main() 
 {
	 int a;
	 float saved_amount, amount_after_discount; 
	 
	 printf("enter actual amount:\n");
	 scanf("%d", &a);
	 
	  if (a <= 2000) {
        printf("Discount is 5%%:\n");
		printf("actual amount:%d\n", a);
		printf("saved amount:%f\n", saved_amount=a*5.0/100);
		printf("amount after discount:%f\n", a-saved_amount);
    } else if (a >= 2000 && a <= 4000) {
        printf("Discount is 10%%:\n");
		printf("actual amount:%d\n", a);
		printf("saved amount:%f\n", saved_amount=a*10.0/100);
		printf("ammount after discount:%f\n", a-saved_amount);
    } else if (a >= 4000 && a <= 6000) {
	    printf("Discount is 20%%:\n");
		printf("actual amount:%d\n", a);
		printf("saved amount:%f\n", saved_amount=a*20.0/100);
		printf("amount after discount:%f\n", a-saved_amount);
	} else if (a >= 6000) {
        printf("Discount is 35%%:\n");
		printf("actual amount:%d\n", a);
		printf("saved amount:%f\n", saved_amount=a*35.0/100);
		printf("amount after discount:%f\n", a-saved_amount);
    }
	
	 return 0;
 }