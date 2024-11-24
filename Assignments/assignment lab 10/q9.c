#include <stdio.h>

void recursivebubbleSort(int arr[], int n) {
	int j;
    if (n == 1)
        return;

    int swapped = 0; 
    for (j=0; j<n-1; j++) {
        if (arr[j] > arr[j+1]) {
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            swapped = 1;
        }
    }
    if (!swapped)
        return;

    recursivebubbleSort(arr, n - 1);
}


int main(){
	int n, i;
	int arr[n];
	
	printf("Enter size of array:");
	scanf("%d", &n);
	
	printf("Enter elements: ");
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	recursivebubbleSort(arr, n);
	
	for(i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
}
