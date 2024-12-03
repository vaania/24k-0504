#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};

struct Library {
    struct Book *books; 
    int bookCount;
};

int main() {
    struct Library *library; 

    library = (struct Library *)malloc(sizeof(struct Library));
    if (library == NULL) {
        printf("Memory allocation failed for library.\n");
        return 1;
    }

    library->bookCount = 5;

    library->books = (struct Book *)malloc(library->bookCount * sizeof(struct Book));
    if (library->books == NULL) {
        printf("Memory allocation failed for books.\n");
        free(library);
        return 1;
    }
    for (int i = 0; i<library->bookCount; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", library->books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", library->books[i].author);
        printf("Publication Year: ");
        scanf("%d", &library->books[i].publicationYear);
    }
    printf("\nBooks published after the year 2000:\n");
    int found = 0;
    for (int i = 0; i<library->bookCount; i++) {
        if (library->books[i].publicationYear > 2000) {
            printf("%s\n", library->books[i].title);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found published after the 2000.\n");
    }

    free(library->books);
    free(library);

    return 0;
}
