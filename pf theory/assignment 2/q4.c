#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int len=strlen(str);
    int i, j;
    
    for (i=0; i<len-1; i++) {
        for (j=i+1; j<len; j++) {
            if (str[i]>str[j]) {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}

int isAnagram(const char *str1, const char *str2) {
    return strcmp(str1, str2)==0;
}

void groupTransactions(char transacs[][50], int n) {
    int grouped[n];
	int i, j;
	 
    for (i=0; i<n; i++) {
        grouped[i] = 0; 
    }

    printf("Grouped Transactions:\n");

    for (i=0; i<n; i++) {
        if (grouped[i]) continue; //skip already grouped transactions

        char sorted1[50];
        strcpy(sorted1, transacs[i]);
        sortString(sorted1); //sort current transaction

        printf("[");
        printf("%s", transacs[i]); 
        grouped[i] = 1;

        for (j=i+1; j<n; j++) {
            if (grouped[j]) continue; //skip already grouped transactions

            char sorted2[50];
            strcpy(sorted2, transacs[j]);
            sortString(sorted2); //sort next transaction

            if (isAnagram(sorted1, sorted2)) {
                printf(", %s", transacs[j]); //print anagram
                grouped[j] = 1; 
            }
        }
        printf("]\n");
    }
}

int main() {
    int n, i;
    
    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    char transacs[n][50];
    printf("Enter the transactions:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", transacs[i]);
    }

    groupTransactions(transacs, n);

    return 0;
}

