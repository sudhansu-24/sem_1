#include<stdio.h>

void mat(int matrix[10][10], int rows, int cols) {
    printf("ENTER THE MATRIX ELEMENTS--\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("ENTER ELEMENTS FOR MATRIX AT POSITION (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMat(int matrix[10][10], int rows, int cols, const char *label) {
    printf("\n%s Matrix:\n", label);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMat(int matrix1[10][10], int matrix2[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subMat(int matrix1[10][10], int matrix2[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposeMat(int matrix[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

void multiplyMat(int matrix1[10][10], int matrix2[10][10], int rows1, int cols1, int rows2, int cols2, int result[10][10]) {
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

    printf("Enter the number of rows and columns for matrix1: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[10][10], matrix2[10][10], result[10][10];

    mat(matrix1, rows1, cols1);

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
                printf("Enter the number of rows and columns for matrix2: ");
                scanf("%d %d", &rows2, &cols2);

                if (rows1 != rows2 || cols1 != cols2) {
                    printf("Matrices Must HAVE SAME DIMENSION FOR ADDITION.\n");
                    break;
                }

                mat(matrix2, rows2, cols2);
                addMat(matrix1, matrix2, rows1, cols1, result);
                printMat(result, rows1, cols1, "Sum");
                break;

            case 2:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d", &rows2, &cols2);

                if (rows1 != rows2 || cols1 != cols2) {
                    printf("Matrices Must HAVE SAME DIMENSION FOR SUBTRACTION.\n");
                    break;
                }

                mat(matrix2, rows2, cols2);
                subMat(matrix1, matrix2, rows1, cols1, result);
                printMat(result, rows1, cols1, "Difference");
                break;

            case 3:
                transposeMat(matrix1, rows1, cols1, result);
                printMat(result, cols1, rows1, "Transposed");
                break;

            case 4:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d", &rows2, &cols2);

                if (cols1 != rows2) {
                    printf("Number of columns in matrix 1 must be equal to the number of rows in matrix 2 for multiplication.\n");
                    break;
                }

                mat(matrix2, rows2, cols2);
                multiplyMat(matrix1, matrix2, rows1, cols1, rows2, cols2, result);
                printMat(result, rows1, cols2, "Product");
                break;

            case 0:
                printf("Exiting the Program.\n");
                return 0;

            default:
                printf("Invalid Choice. Please try again.\n");
        }
    }

    return 0;
}
