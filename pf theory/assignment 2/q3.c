#include <stdio.h>
#include <string.h>

#define max_word_len 100

int compressWord(char *word, char *compWord) {
    int remCount=0;
    int i, j=0;  //for the compressed word

    for (i=0; i<strlen(word); i++) {
        if (i==0 || word[i] != word[i - 1]) {
            compWord[j++] = word[i];
        } else {
            remCount++;
        }
}
    compWord[j] = '\0';
    return remCount;
}

int main() {
    char word[max_word_len];
    char compWord[max_word_len];

    printf("Enter a word: ");
    scanf("%s", word);

    int remCount=compressWord(word, compWord);

    printf("Compressed word: %s\n", compWord);
    printf("Total characters removed: %d\n", remCount);

    return 0;
}
