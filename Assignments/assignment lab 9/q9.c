#include <stdio.h>
#include <string.h>

void reverseString(char *word);

int main (){
	char word[100];
	
	printf("Enter a string:");
	scanf("%s", &word);
	
	reverseString(word);
	
	printf("%s", word);
	
	return 0;
}

 reverseString(char *word){
	int i, j;
	char tmp;
	
	for(i=0, j=strlen(word)-1; i<j; ++i, --j){
			tmp= word[i];
			word[i]= word[j];
			word[j]= tmp;
	}
}