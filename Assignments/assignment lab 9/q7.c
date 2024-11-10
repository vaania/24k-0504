#include <stdio.h>

int prime(int x);  

int main() {
    int i, n;
    int num[100];
 
    printf("How many numbers do you want to check? ");
    scanf("%d", &n);
    
    printf("Enter numbers to check whether they are prime or not:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &num[i]); 
    }
 
    for (i=0; i<n; i++) {
        if (prime(num[i])) {  
            printf("%d is a prime number.\n", num[i]);
        } else {
            printf("%d is not a prime number.\n", num[i]);
        }
    }
    
    return 0;
}

int prime(int x) {  
    int i;
    if (x<=1) {
        return 0;
    }
    for (i=2; i*i<=x; i++) {
        if (x%i==0) {
            return 0;
        }
    }
    return 1;
}
