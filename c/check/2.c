#include<stdio.h>
void mat(int matrix1[10][10],int rows,int cols){
    printf("ENTER THE MATRIX ELEMENTS--\n");
    for (int i = 0;i <rows; ++i){
        for (int j=0;j<cols;++j){
            printf("ENTER ELEMENTS FOR MATRIX AT POSITION (%d,%d)",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
}

void printMAt(int matrix[10][10],int rows,int cols,const char *label){
    printf("\n%s Matrix:\n",label);
    for(int i = 0;i<rows;++i){
        for(int j = 0;j<cols;++j){
            printf("%d\t",matrix[i][j]);
        }
    }
}

void addmat(int matrix1[10][10],int matrix2[10][10],int rows,int cols,int result[10][10]){
    for(int i=0;i<rows;++i){
        for (int j=0;j<cols;++j){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void submat(int matrix1[10][10],int matrix2[10][10],int rows,int cols,int result[10][10]){
    for (int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposemat(int matrix[10][10],int rows,int cols,int result[10][10]){
    for (int i = 0;i<rows;++i){
        for(int j = 0;j<cols;++j){
            result[j][i] = matrix[i][j];
        }
    }
}

void multiplymat(int matrix1[10][10],int matrix2[10][10],int rows1,int cols1,int rows2,int cols2,int result[10][10]){
    for (int i = 0;i<rows1;++i){
        for (int j = 0;j<cols2;++j){
            result[i][j] = 0;
            for(int k = 0;k <cols1;++k){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main(){
    int choice,rows1,cols1,rows2,cols2;

    printf("Enter the nunmber of rows and columns for matrix1: ");
    scanf("%d",&rows1,&cols1);

    float matrix1[10][10],matrix2[10][10],result[10][10];

    inputMat(matrix1,rows1,cols1);

    while(1){
        printf("\nMatrix Operations Menu:\n");
        printf("1.Addition of 2 matrices\n");
        printf("2.Subtraction of 2 matrices\n");
        printf("3. Transpose of a matrix\n");
        printf("4. Product of 2 matrices\n");
        printf("0. Exitn");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("Enter the number of rows and columns for matrix2: ");
                scanf("%d %d", &rows2, &cols2);

                if (rows1 != rows2 || cols1 != cols2){
                    printf("Matrices Must HAVE SAME DIMENSION FOR ADDITION.\n");
                    break;
                }

                mat(matrix2, rows2, cols2);
                addmat(matrix1, matrix2, rows1, cols1, result);
                printMAt(result, rows1, cols1, "Sum");
                break;

            case 2:
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d",&rows2,&cols2);

                if (rows1 != rows2 || cols1 != cols2){
                    printf("Matrics Must HAVE SAME DIMENESION FOR SUBTRACTION.\n");
                    break;
                }

                mat(matrix2,rows2,cols2);
                submat(matrix1,matrix2,rows1,cols1,result);
                printMAt(result,rows1,cols1,"Difference");
                break;
            case 3:
                transposemat(matrix1,rows1,cols1,result);
                printfMat(result,cols1,rows1,"Transposed");
                break;
            case 4:
            printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d %d",&rows2,&cols2);

                if (cols1 != rows2){
                    printf("Number of columns in matrix 1 must be equal to the number of rows in matrix 2 for multiplication .\n");
                    break;
                }
                mat(matrix2,rows2,cols2);
                multiplymat(matrix1,matrix2,rows1,cols1,rows2,cols2,result);
                printMAt(result,rows1,cols2,"Product");
                break;
            case 0:
                printf("Exiting the Program.\n");
                return 0;
            default:
                printf("Invalid Choice.Please try again.\n");
        }
    }
    return 0;
}






