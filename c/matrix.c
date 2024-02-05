#include <stdio.h>

void inputMat(float matrix[10][10], int rows, int cols) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }
}

void printMat(float matrix[10][10], int rows, int cols, const char *
label) {
    printf("\n%s Matrix:\n", label);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMat(float matrix1[10][10], float matrix2[10][10], int rows, int cols, float result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMat(float matrix1[10][10], float matrix2[10][10], int rows, int cols, float result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposeMat(float matrix[10][10], int rows, int cols, float result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

void multiplyMat(float matrix1[10][10], float matrix2[10][10], int rows1, int cols1, int rows2, int cols2, float result[10][10]) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int choice, rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    float matrix1[10][10], matrix2[10][10], result[10][10];

    inputMat(matrix1, rows1, cols1);

    while (1) {
        printf("\nMatrix Operations Menu:\n");
        printf("1. Addition of 2 matrices\n");
        printf("2. Subtraction of 2 matrices\n");
        printf("3. Transpose of a matrix\n");
        printf("4. Product of 2 matrices\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d", &rows2, &cols2);

                if (rows1 != rows2 || cols1 != cols2) {
                    printf("Matrices must have the same dimensions for addition.\n");
                    break;
                }

                inputMat(matrix2, rows2, cols2);
                addMat(matrix1, matrix2, rows1, cols1, result);
                printMat(result, rows1, cols1, "Sum");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
                break;
            case 2:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d", &rows2, &cols2);

                if (rows1 != rows2 || cols1 != cols2) {
                    printf("Matrices must have the same dimensions for subtraction.\n");
                    break;
                }

                inputMat(matrix2, rows2, cols2);
                subtractMat(matrix1, matrix2, rows1, cols1, result);
                printMat(result, rows1, cols1, "Difference");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
                break;
            case 3:
                transposeMat(matrix1, rows1, cols1, result);
                printMat(result, cols1, rows1, "Transposed");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
                break;
            case 4:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d", &rows2, &cols2);

                if (cols1 != rows2) {
                    printf("The number of columns in matrix 1 must be equal to the number of rows in matrix 2 for multiplication.\n");
                    break;
                }

                inputMat(matrix2, rows2, cols2);
                multiplyMat(matrix1, matrix2, rows1, cols1, rows2, cols2, result);
                printMat(result, rows1, cols2, "Product");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
                break;
            case 0:
                printf("Exiting the program.\n");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Sudhansu Sekhar  ROLL NO 42\n");
        }
    }

    return 0;
}
