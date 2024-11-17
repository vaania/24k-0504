#include <stdio.h>

	void horizontalHistogram(int arr[], int n){
		int i,j;
		
		printf("Horizontal histogram\n");
	for(i=1; i<=n; i++){
		printf("%d", arr[i-1]);
		for(j=0; j<arr[i-1]; j++){
			printf("* ");
		}
		printf("\n");
	}
}
	
	void verticalHistogram(int arr[], int n) {
	 int i, j;
     int max = 0;
    for (i = 0; i <n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nVertical Histogram:\n");
    for (i = max; i > 0; i--) { 
        for (j = 0; j < n; j++) {
            if (arr[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
//for printing base numbers
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
	
	int n, i;
	int arr[100];
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	printf("enter elements:\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	horizontalHistogram(arr, n);
	verticalHistogram(arr, n);
	
	return 0;
}
