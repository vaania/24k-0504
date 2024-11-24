#include <stdio.h>

int linearSearch(int arr[], int n, int target, int index) {
    
    if (index == n)
        return -1; 

    if (arr[index] == target)
        return index; 
        
    return linearSearch(arr, n, target, index + 1);
}

int main() {
	int target;
	int arr[] = {10, 20, 30, 40, 50};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	printf("\nEnter your target element: ");
	scanf("%d", &target);

    int result = linearSearch(arr, n, target, 0);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}

