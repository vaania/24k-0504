#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int m, int n) {
    int **matrix = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i<m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }
    return matrix;
}


void freeMatrix(int **matrix, int m) {
    for (int i = 0; i<m; i++) {
        free(matrix[i]);
    }
    free(matrix);
}


void inputMatrix(int **matrix, int m, int n, const char *name) {
    printf("Enter elements of matrix %s (%dx%d):\n", name, m, n);
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int **matrix, int m, int n, const char *name) {
    printf("Matrix %s:\n", name);
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int **multiplyMatrices(int **matrix1, int m1, int n1, int **matrix2, int m2, int n2) {
    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return NULL;
    }

    int **result = allocateMatrix(m1, n2);


    for (int i = 0; i<m1; i++) {
        for (int j = 0; j<n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k<n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}


int main() {
    int m1, n1, m2, n2;

    printf("Enter dimensions of the first matrix (rows & columns): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter dimensions of the second matrix (rows & columns): ");
    scanf("%d %d", &m2, &n2);

    int **matrix1 = allocateMatrix(m1, n1);
    int **matrix2 = allocateMatrix(m2, n2);

    inputMatrix(matrix1, m1, n1, "Matrix 1");
    inputMatrix(matrix2, m2, n2, "Matrix 2");
    displayMatrix(matrix1, m1, n1, "Matrix 1");
    displayMatrix(matrix2, m2, n2, "Matrix 2");

    int **result = multiplyMatrices(matrix1, m1, n1, matrix2, m2, n2);

    if (result != NULL) {
        displayMatrix(result, m1, n2, "Result");
        freeMatrix(result, m1);
    }
    freeMatrix(matrix1, m1);
    freeMatrix(matrix2, m2);

    return 0;
}
