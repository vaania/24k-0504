#include <stdio.h>
int main(){
	char a , encrypt, decrypt;
	int b;
	
	printf("enter a character: \n");
	scanf("%c", &a);
	
	printf("enter a number : \n");
	scanf("%d", &b);
	
	encrypt=a^b;
	printf("The encrypted character is :%c\n", encrypt);
	
	decrypt=encrypt^b;
	printf("The decrypted character is :%c\n", decrypt);
	
	return 0;
}