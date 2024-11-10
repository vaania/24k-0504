#include <stdio.h>
#include <string.h>

int main (){
	
	char dest[3][11]={"hello", "world"};
	char word[100];
	int i;
	
	printf("Enter a word:\n");
	
	scanf("%s", &word);

	if(strstr(dest, word)){
		printf("Found.");
	}else{
		printf("Not found.");
	}
	return 0;
}