 #include <stdio.h>
 int main() 
 {
	 int units, customer_id;
	 float bill, surcharge_amount, net_bill, total_bill;
	 
	 printf("enter customer ID:\n");
	 scanf("%d", &customer_id);
	 printf("enter units:\n");
	 scanf("%d", &units);
		
	 if (units<=199) {
        printf("enter customer id: %d\n", customer_id);		
	    printf("units comsumed:%d\n", &units);
		printf("charge per unit:16.20\n");
		total_bill=16.20*units;
		printf("charges to be paid:%f\n", total_bill);
	} else if (units>=200 && units<300) {
        printf("enter customer id: %d", customer_id);
        printf("units comsumed:%d\n", &units);
		printf("charge per unit:20.10\n");
		total_bill=20.10*units;
		printf("charges to be paid:%f\n", total_bill);
	} else if (units>=300 && units<500) {
	    printf("enter customer id: %d", customer_id);
	    printf("units comsumed:%d\n", &units);
		printf("charge per unit:27.10\n");
		total_bill=27.10*units;
		printf("charges to be paid:%f\n", total_bill);
	} else if (units>500) {
	    printf("enter customer id: %d", customer_id);
	    printf("units comsumed:%d\n", &units);
		printf("charge per unit:35.90\n");
		bill=35.90*units;
		printf("charges to be paid:%f\n", bill);
		surcharge_amount=bill*0.15;
		net_bill=surcharge_amount+bill;
		printf("surcharge amount:%f\n", surcharge_amount);
		printf("total bill to be paid:%f\n", net_bill);
	 
	}  
	 return 0;
 }