#include <stdio.h>
#include <string.h>

int main() {
    char destination[100];
    char source[100];
    int n;

    printf("Enter the destination string: ");
    fgets(destination, sizeof(destination), stdin);
    destination[strcspn(destination, "\n")] = '\0';  
    
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';  

    printf("Enter the number of characters to append: ");
    scanf("%d", &n);

    int len = strlen(source);
        n = len;
    
    strncat(destination, source, n);
    printf("Concatenated string: %s\n", destination);

    return 0;
}
