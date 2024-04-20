#include <stdio.h>

// Function to perform addition of two matrices
void addMatrix(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to perform subtraction of two matrices
void subtractMatrix(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to perform multiplication of two matrices
void multiplyMatrix(int mat1[][3], int mat2[][3], int result[][3], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display matrix
void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    printf("Matrix 1:\n");
    displayMatrix(mat1, 3, 3);
    printf("\nMatrix 2:\n");
    displayMatrix(mat2, 3, 3);

    // Addition
    addMatrix(mat1, mat2, result, 3, 3);
    printf("\nAddition:\n");
    displayMatrix(result, 3, 3);

    // Subtraction
    subtractMatrix(mat1, mat2, result, 3, 3);
    printf("\nSubtraction:\n");
    displayMatrix(result, 3, 3);

    // Multiplication
    multiplyMatrix(mat1, mat2, result, 3, 3, 3);
    printf("\nMultiplication:\n");
    displayMatrix(result, 3, 3);

    return 0;
}
