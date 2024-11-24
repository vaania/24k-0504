#include<stdio.h>
#include<string.h>

void reverseString(char arr[], int start, int end){
    int n=strlen(arr);
    if (start>=end){
        return;
    }
    else {
        char reverse=arr[start];
        arr[start]=arr[end];
        arr[end]=reverse;
    }
    reverseString(arr, start+1, end-1);
}
int main (){
    char arr[100];
    int start, end;
    printf("Enter a word: ");
    scanf("%s", arr);
    int n=strlen(arr);
    reverseString(arr, 0, n-1);
    printf("The reversed word is: %s \n", arr);
    0;
}
