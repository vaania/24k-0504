#include <stdio.h>

int main() {
    int n;
    int count=0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while (n > 0) {
        count = count + (n & 1);  
        n = n >> 1;      
    }

    printf("The number of 1s in the binary representation is: %d\n", count);

    return 0;
}
