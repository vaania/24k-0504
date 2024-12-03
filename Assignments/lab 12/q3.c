#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i<n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i<n; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    free(arr);

    return 0;
}
