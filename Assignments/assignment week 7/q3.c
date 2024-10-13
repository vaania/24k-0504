#include<stdio.h>
int main (){
	
	int i, n, min, max;
	int arr[100];
	
	printf("Enter size of array:\n");
	scanf("%d", &n);
	
	printf("Enter elements:\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	for(i=0; i<n; i++){
	  if (arr[i]>max){
		max=arr[i];
	}
	
	if(arr[i]<min){
		min=arr[i];
	 }
    }
	printf("Maximum element is: %d\n", max);
	printf("Minimum element is: %d\n", min);
	return 0;
}