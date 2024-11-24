#include <stdio.h>

void print(int arr[], int n){
	if (n==0){
		return;
	}
	
	printf("%d ", arr[0]);
	print(arr+1, n-1);
}

int main (){
	int n, i;
	
	printf("Enter size of your array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter elements of array: ");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Your array is:\n");
	print(arr, n);
	
	return 0;
}
