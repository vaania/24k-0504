 #include <stdio.h>
 int main() 
 {  
	float tax_rate, salary;
	
	 printf("enter tax_rate");
	 scanf("%f", &tax_rate);
	 
	 printf("salary");
	 scanf("%f", &salary);
	 
	 printf("new_salary is : %f", salary-salary*tax_rate);
	  
	  return 0;
 }
 