#include <stdio.h>
#include <string.h>

void minMax(int arr[], int n, int *max, int *min);

int main (){
	int n, i, j, x;
	int arr[100];
	int max, min;
	
	printf("Enter size of array:\n");
	scanf("%d", &n);
	
	printf("Enter elements:\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	minMax(arr, n, &max, &min);
	
	printf("%d is the maximum element and %d is the minimum element.", max, min);
	
	return 0;
}

	void minMax(int arr[], int n, int *max, int *min){
	int i;
	
	*max=arr[0];
	*min=arr[0];
	
	for(i=0; i<n; i++){
	  if (arr[i]>*max){
		*max=arr[i];
	}
	
	if(arr[i]<*min){
		*min=arr[i];
	 }
    }
}