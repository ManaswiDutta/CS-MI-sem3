#include <stdio.h>

// Helper function to read matrix elements
void readMatrix(int rows, int cols, int mat[rows][cols], char name) {
    printf("ENTER ELEMENTS OF %c:-\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Helper function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols], char name) {
    printf("[%c]=\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to handle matrix addition
void matrixAddition(void) {
    int p, q;
    printf("Enter the number of rows in matrices: ");
    scanf("%d", &p);
    printf("Enter the number of columns in matrices: ");
    scanf("%d", &q);

    int a[p][q];
    int b[p][q];

    readMatrix(p, q, a, 'A');
    printMatrix(p, q, a, 'A');

    readMatrix(p, q, b, 'B');
    printMatrix(p, q, b, 'B');

    printf("\n[A]+[B]=\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf(" %d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

// Function to handle matrix multiplication
void matrixMultiplication(void) {
    int p, q, r;
    printf("Enter the number of rows in first matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns in first matrix: ");
    scanf("%d", &q);
    printf("Enter the number of columns in second matrix: ");
    scanf("%d", &r);

    int a[p][q];
    int b[q][r];

    readMatrix(p, q, a, 'A');
    printMatrix(p, q, a, 'A');

    readMatrix(q, r, b, 'B');
    printMatrix(q, r, b, 'B');

    int c[p][r];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            c[i][j] = 0;
            for (int k = 0; k < q; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\n[A]x[B]=\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int choice;

    printf("Select Matrix Operation:\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            matrixAddition();
            break;
        case 2:
            matrixMultiplication();
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}