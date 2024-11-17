#include <stdio.h>

int main (){
	
	int n;
	int i, min;
	
	printf("Enter size of array:\n");
	scanf("%d", &n);
	
	if(n<2){
		printf("Array size must be greater than 2!");
		return 0;
	}
	
	int arr[n];
	
	printf("Enter elements:\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int smallest = arr[0], secSmallest = 9999; 

    for(i=1; i<n; i++) {
        if(arr[i]<smallest) {
         secSmallest=smallest;
            smallest=arr[i];
        } else if(arr[i]<secSmallest && arr[i]!=smallest) {
            secSmallest=arr[i];
        }
    }

	if(secSmallest==9999){
		printf("There is no second smallest element in array.\n");
	}else{
		printf("The second smallest element is %d", secSmallest);
	}
	
	return 0;
}
