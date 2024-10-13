#include<stdio.h>
int main(){
	
	int i, n;
	int arr[100];
	
	printf("Enter size of array:\n");
	scanf("%d", &n);
	
	printf("Enter elements :\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
    
	for(i=n; i>=0; i--){
		printf("%d, ", arr[i]);
	}
	
	
	return 0;
}