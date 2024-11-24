#include <stdio.h>

void conversion(float mdistance){
	static int count=0;
	
	float kmdistance = mdistance/1000;
	
	printf("The converted distance from meters to kilometers is %f\n", kmdistance);
	
	count++;
	
	printf("The conversion is done %d times.\n", count);
}

int main (){
	int n, i;
	float mdistance;
	
	printf("Enter distances you want to convert (meters to kilometers):");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("Enter temperature %d:", i+1);
		scanf("%f", &mdistance);
		conversion(mdistance);
	}
	
	
	return 0;
}
