#include <stdio.h>
 int main() 
 {
    float a, b, car_fuel_average, total_fuel_consumption, total_distance;
	total_distance=1207+1207;
	
	printf("enter car's fuel average\n");
	scanf("%f", &car_fuel_average);
	
	printf("total fuel consumed is : %f\n", total_distance/car_fuel_average);
	
	a = 1207/car_fuel_average*118;
	b = 1207/car_fuel_average*123;
	
	total_fuel_consumption=a+b;
	printf("total fuel consumption is : %f\n", total_fuel_consumption);
	
	 return 0;
 }