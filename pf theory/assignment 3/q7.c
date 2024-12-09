#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];
    double rating;
    int runtime; //in min
    char format[20];
} Content;

// Function prototypes
double** createEngMatrix(int users, int categories);
void updateEngScore(double** matrix, int userIdx, int catIdx, double score);
void displayEngMatrix(double** matrix, int users, int categories);
void freeEngMatrix(double** matrix, int users);

double*** createDevMatrix(int users, int devices);
void updateDevPref(double*** matrix, int userIdx, int devIdx, double resolution, double bandwidth);
void displayDevMatrix(double*** matrix, int users, int devices);
void freeDevMatrix(double*** matrix, int users, int devices);

Content*** createContentMatrix(int categories, int contents);
void addContent(Content*** matrix, int catIdx, int contentIdx, const char* title, double rating, int runtime, const char* format);
void displayContentMatrix(Content*** matrix, int categories, int contents);
void freeContentMatrix(Content*** matrix, int categories, int contents);

int main() {
    int users = 2, categories = 3, devices = 2, contents = 2;

    double** engMatrix = createEngMatrix(users, categories);
    updateEngScore(engMatrix, 0, 1, 85.5);
    updateEngScore(engMatrix, 1, 2, 72.3);

    printf("\n--Engagement Matrix---\n");
    displayEngMatrix(engMatrix, users, categories);



    double*** devMatrix = createDevMatrix(users, devices);
    updateDevPref(devMatrix, 0, 0, 1080, 500.0);
    updateDevPref(devMatrix, 1, 1, 720, 300.0);

    printf("\n--- Device Matrix ---\n");
    displayDevMatrix(devMatrix, users, devices);


    Content*** contentMatrix = createContentMatrix(categories, contents);
    addContent(contentMatrix, 0, 0, "Action Movie", 4.5, 120, "H.264");
    addContent(contentMatrix, 1, 1, "Drama Series", 3.8, 45, "HEVC");

    printf("\n--- Content Metadata Matrix ---\n");
    displayContentMatrix(contentMatrix, categories, contents);

    freeEngMatrix(engMatrix, users);
    freeDevMatrix(devMatrix, users, devices);
    freeContentMatrix(contentMatrix, categories, contents);

    return 0;
}

double** createEngMatrix(int users, int categories) {
    double** matrix = malloc(users * sizeof(double*));
    for (int i=0; i < users; i++) {
        matrix[i] = calloc(categories, sizeof(double));
    }
    return matrix;
}

void updateEngScore(double** matrix, int userIdx, int catIdx, double score) {
    matrix[userIdx][catIdx] = score;
}

void displayEngMatrix(double** matrix, int users, int categories) {
    for (int i=0; i < users; i++) {
        printf("User %d: ", i + 1);
        for (int j=0; j < categories; j++) {
            printf("%.1f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void freeEngMatrix(double** matrix, int users) {
    for (int i=0; i < users; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

double*** createDevMatrix(int users, int devices) {
    double*** matrix = malloc(users * sizeof(double**));

    for (int i = 0; i < users; i++) {
        matrix[i] = malloc(devices * sizeof(double*));
        for (int j = 0; j < devices; j++) {
            matrix[i][j] = calloc(2, sizeof(double));
        }
    }
    return matrix;
}

void updateDevPref(double*** matrix, int userIdx, int devIdx, double resolution, double bandwidth) {
    matrix[userIdx][devIdx][0] = resolution;
    matrix[userIdx][devIdx][1] = bandwidth;
}

void displayDevMatrix(double*** matrix, int users, int devices) {
    for (int i=0; i < users; i++) {
        printf("User %d:\n", i + 1);
        for (int j=0; j < devices; j++) {
            printf("  Device %d: Resolution: %.1f, Bandwidth: %.1f\n", j + 1, matrix[i][j][0], matrix[i][j][1]);
        }
    }
}

void freeDevMatrix(double*** matrix, int users, int devices) {
    for (int i=0; i < users; i++) {
        for (int j=0; j < devices; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }
    free(matrix);
}

Content*** createContentMatrix(int categories, int contents) {
    Content*** matrix = malloc(categories * sizeof(Content**));
    for (int i=0; i < categories; i++) {
        matrix[i] = malloc(contents * sizeof(Content*));
        for (int j=0; j < contents; j++) {
            matrix[i][j] = NULL;
        }
    }
    return matrix;
}

void addContent(Content*** matrix, int catIdx, int contentIdx, const char* title, double rating, int runtime, const char* format) {
    matrix[catIdx][contentIdx] = malloc(sizeof(Content));
    strcpy(matrix[catIdx][contentIdx]->title, title);

    matrix[catIdx][contentIdx]->rating = rating;

    matrix[catIdx][contentIdx]->runtime = runtime;
    strcpy(matrix[catIdx][contentIdx]->format, format);
}

void displayContentMatrix(Content*** matrix, int categories, int contents) {
    for (int i=0; i < categories; i++) {
        printf("Category %d:\n", i + 1);
        for (int j=0; j < contents; j++) {
            if (matrix[i][j]) {
                printf("  Content %d: %s, Rating: %.1f, Runtime: %d, Format: %s\n",
                       j + 1, matrix[i][j]->title, matrix[i][j]->rating,
                       matrix[i][j]->runtime, matrix[i][j]->format);
            }
        }
    }
}

void freeContentMatrix(Content*** matrix, int categories, int contents) {
    for (int i=0; i < categories; i++) {
        for (int j=0; j < contents; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }

    free(matrix);
}
