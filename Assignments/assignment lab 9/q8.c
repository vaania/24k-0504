#include <stdio.h>

int operation(int x,int y, char ch);

int main() {
    int x, y, result;
    char ch;
    
    printf("enter two numbers:\n");
    scanf("%d %d", &x, &y);
    
    printf("enter operation:\n");
    scanf(" %c", &ch);
     
    result=operation(x, y, ch);
    printf("Result is %d", result);
     
    return 0;
}

int operation(int x,int y, char ch){
	switch(ch){
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;				
	}
}