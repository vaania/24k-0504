 #include <stdio.h>
 int main() 
 {
	 char c; 
	 
	 printf("Enter a character:\n");
	 scanf(" %c", &c);
	 
	 if (c >= 'A' && c <= 'Z') {
        printf("Uppercase letter: %c\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("Lowercase letter: %c\n", c);
    } else if (c >= '0' && c <= '9') {
	     printf("Digit: %c\n", c);
	} else {
         printf("Special character: %c", c);
    }
		 
	 return 0;
 }