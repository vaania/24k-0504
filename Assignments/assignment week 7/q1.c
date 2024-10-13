#include<stdio.h>
int main (){
	
	int n, i, sum=0;
	int arr[100];
	
	printf("Enter the number of elements of array:\n");
	scanf("%d", &n);
	
	printf("Enter elements :\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		sum+=arr[i];
	}
	printf("sum of elements of array is: %d\n", sum);
	
	return 0;
}