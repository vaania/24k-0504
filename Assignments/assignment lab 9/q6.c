#include <stdio.h>

void swapIntegers(int *x, int *y);  

int main() {
    int x, y;
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);
  
    swapIntegers(&x, &y);
    printf("After swapping: x=%d, y=%d\n", x, y);
    
    return 0;
}

void swapIntegers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

