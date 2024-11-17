#include <stdio.h>
#include <string.h>

#define MAX_SLOGANS 3
#define MAX_LENGTH 100

void analyzeCharFreq(char slogan[]) {
    int freq[128] = {0};
    int i;
    
    for (i=0; slogan[i] != '\0'; i++) {
        freq[(int)slogan[i]]++;
    }

    printf("For \"%s\": {", slogan);
    int first=1;
    for (i=0; i<128; i++) {
        if (freq[i]>0) {
            if (!first) {
                printf(", ");
            }
            printf("'%c': %d", i, freq[i]);
            first=0;
        }
    }
    printf("}\n");
}

int main() {
    int i;
    char slogans[MAX_SLOGANS][MAX_LENGTH] = {
        "buy now",
        "save big",
        "limited offer"
    };
    for (i=0; i<MAX_SLOGANS; i++) {
        analyzeCharFreq(slogans[i]);
    }

    return 0;
}

