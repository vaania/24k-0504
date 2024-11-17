#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_HEX_LENGTH 20

int BinaryToDecimal(int number);
int DecimalToBinary(int number);
void DecimalToHexadecimal(int number);
void HexadecimalToDecimal(char hexNumber[]);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);

//function to display the menu
int displayMenu() {
    int choice;
    
    printf("\nConversion Menu:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("5. Binary to Hexadecimal\n");
    printf("6. Hexadecimal to Binary\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);
    return choice;
}
int main() {
    int choice, decimalNumber, binaryNumber;
    char hexNumber[MAX_HEX_LENGTH];

    while (1) {
        choice = displayMenu();

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%d", &binaryNumber);
                printf("Decimal equivalent: %d\n", BinaryToDecimal(binaryNumber));
                break;

            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &decimalNumber);
                printf("Binary equivalent: %d\n", DecimalToBinary(decimalNumber));
                break;

            case 3:
                printf("Enter a decimal number: ");
                scanf("%d", &decimalNumber);
                DecimalToHexadecimal(decimalNumber);
                break;

            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumber);
                HexadecimalToDecimal(hexNumber);
                break;

            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &binaryNumber);
                BinaryToHexadecimal(binaryNumber);
                break;

            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumber);
                HexadecimalToBinary(hexNumber);
                break;

            case 7:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice!");
        }
    }
    return 0;
}

//function to convert binary to decimal
int BinaryToDecimal(int number) {
    int decimal = 0, base = 1, remainder;
    
    while (number > 0) {
        remainder = number % 10;
        decimal += remainder * base;
        number /= 10;
        base *= 2;
    }
    return decimal;
}

//function to convert decimal to binary
int DecimalToBinary(int number) {
    int binary = 0, base = 1;
    
    while (number > 0) {
        int lastDigit = number % 2;
        binary += lastDigit * base;
        number /= 2;
        base *= 10;
    }
    
    return binary;
}

//function to convert decimal to hexadecimal
void DecimalToHexadecimal(int number) {
    char hex[20];
    int i = 0, j;

    if (number == 0) {
        printf("Hexadecimal equivalent: 0\n");
        return;
    }

    while (number != 0) {
        int temp = number % 16;
        
        if (temp < 10)
            hex[i++] = temp + '0';
        else
            hex[i++] = temp - 10 + 'A';
        
        number /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (j = i - 1; j >= 0; j--) {
        putchar(hex[j]);
    }
    putchar('\n');
}

//function to convert hexadecimal to decimal
void HexadecimalToDecimal(char hexNumber[]) {
    int decimal = (int)strtol(hexNumber, NULL, 16);
    printf("Decimal equivalent: %d\n", decimal);
}

//function to convert binary to hexadecimal
void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

//function to convert hexadecimal to binary
void HexadecimalToBinary(char hexNumber[]) {
    int decimal = (int)strtol(hexNumber, NULL, 16);
    int j;
    
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    char binary[100];
    int index = 0;

    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }

    printf("Binary equivalent: ");
    for (j = index - 1; j >= 0; j--) {
        putchar(binary[j]);
    }
    putchar('\n');
}
