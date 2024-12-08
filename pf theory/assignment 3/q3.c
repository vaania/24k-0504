#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateEmail(char* email) {
    if (email == NULL || strlen(email) == 0) {
        return 0;
    }
    int atCount=0;
    int dotAfterAt=0;
    int atPosition= -1;

    for (int i=0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            atCount++;
            atPosition = i;
        }
        if (atCount == 1 && email[i] == '.') {
            dotAfterAt = 1;
        }
    }
    if (atCount != 1) {
        return 0;
    }
    if (atPosition == strlen(email) - 1 || atPosition == 0) {
        return 0;
    }
    if (!dotAfterAt) {
        return 0;
    }

    return 1; // Valid email
}

int main() {
    char *email;
    size_t len;

    printf("Enter an email address: ");
    getline(&email, &len, stdin);

    email[strcspn(email, "\n")] = '\0';

    if (validateEmail(email)) {
        printf("Valid Email\n");
    } else {
        printf("Invalid Email\n");
    }

    free(email);

    return 0;
}
