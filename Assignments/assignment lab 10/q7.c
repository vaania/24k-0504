#include <stdio.h>

#define MAX_TEMP 40

void temperature(float temp) {
    static int count = 0; 

    if (temp > MAX_TEMP) {
        count++;
        printf("Temperature %.2f exceeds the maximum limit of %d°C.\n", temp, MAX_TEMP);
    } else {
        printf("Temperature %.2f is within the allowable limit.\n", temp);
    }

    printf("Temperature exceeded the limit %d times. \n", count);
}

int main() {
    int n, i;
    float temp;

    printf("Enter the number of temperatures to check: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("Enter temperature %d: ", i+1);
        scanf("%f", &temp);
        temperature(temp);
    }

    return 0;
}

