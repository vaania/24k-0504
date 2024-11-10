#include <stdio.h>
#include <string.h>

void palindrome(char *word, char *reversed);

int main (){
	char word[100], reversed[100];
	int result;
	
	printf("Enter the word you want to check if it is palindrome:\n");
	scanf("%s", &word);
	
	palindrome(word, reversed);
	
	result=strcmp(word, reversed);
	
	if(result==0){	
    printf("Palindrome.");
   }else {
   	printf("Not palindrome.");
   }
	
	return 0;
}

	void palindrome(char *word, char *reversed){
	int i, j;
	int length= strlen(word);
	
	 for(i=0, j=length-1; i<length; i++, j--) {
        reversed[i] = word[j];
    }
    reversed[length]='\0';
}