#include <stdio.h>

void inputMat(int Matrix[10][10],int rows,int cols){
    printf("\n Matrix Elemnents \n");
    for(int i = 0; i < rows ; i++){
        for(int j =0; j < cols;j++){
            printf("Enter Element at postion (%d,%d)",i + 1,j + 1);
            scanf("%d",&Matrix[i][j]);
        }
    }
}

void printMat(int Matrix[10][10],int rows,int cols,const char *label){
    printf("\n%s Matrix : \n",label);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d \t",Matrix[i][j]);
        }
        printf("\n");
    }
    
}

void addMat(int Matrix1[10][10],int Matrix2[10][10],int rows1,int cols1,int rows2,int cols2,int result[10][10]){
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            result[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }
}

void subMat(int Matrix1[10][10],int Matrix2[10][10],int rows1,int cols1,int rows2,int cols2,int result[10][10]){
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            result[i][j]=Matrix1[i][j]-Matrix2[i][j];
        }
    }
}

void transposeMat(int Matrix[10][10],int rows,int cols,int result[10][10]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[j][i]=Matrix[i][j];
        }
    }
}

void multiplyMat(int Matrix1[10][10],int Matrix2[10][10],int rows1,int cols1,int rows2,int cols2,int result[10][10]){
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            result[i][j]=0;
            for(int k=0;k<cols1;k++){
                result[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }
        }
    }
}

int main(){
    int choice,rows1,cols1,rows2,cols2;

    printf("\nENTER THE NUMBER OF ROWS AND COLUMNS FOR MATRIX 1");
    scanf("%d %d",&rows1,&cols1);

    int matrix1[10][10],matrix2[10][10],result[10][10];

    inputMat(matrix1,rows1,cols1);

    for(int i = 0;i<1;i++){
        printf("\nMATRIX OPERATION MENU\n");
        printf("\nENTER 1. MATRIX ADDITION");
        printf("\nENTER 2. FOR MATRIX SUBTRACTION");
        printf("\nENTER 3. FOR TRANSPOSE");
        printf("\nENTER 4. FOR MATRIX MULTIPLICATION");
        printf("\nENTER 0. TO EXIT PROGRAM...");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("ENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX 2");
            scanf("%d %d",&rows2,&cols2);
            
            if(rows1 != rows2 || cols1!=cols2){
                printf("DIMENSION MUST BE SAME FOR MATRIX ADDTION");
                break;
            }

            inputMat(matrix2,rows2,cols2);
            addMat(matrix1,matrix2,rows1,cols1,rows2,cols2,result);
            printMat(result,rows1,cols1,"SUM");                               
            break;

            case 2:
             printf("ENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX 2");
            scanf("%d %d",&rows2,&cols2);
            
            if(rows1 != rows2 || cols1!=cols2){
                printf("DIMENSION MUST BE SAME FOR MATRIX SUBTRACTION");
                break;
            }

            inputMat(matrix2,rows2,cols2);
            subMat(matrix1,matrix2,rows1,cols1,rows2,cols2,result);
            printMat(result,rows1,cols1,"SUBTRACTION");                              
            break;

            case 3:
            transposeMat(matrix1,rows1,cols1,result);
            printMat(result,rows1,cols1,"TRANSPOSE");
            break;

            case 4:
            printf("ENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX 2");
            scanf("%d %d",&rows2,&cols2);

            if (cols1!=rows2){
                printf("FOR MATRIX MULTIPLCIATION NUMBER OF ELMENTS IN ROWS OF 1st Matrix MUST BE EQAUL TO THE NUMBER OF COLUMNS OF MATRIX 2");
                break;
            }
            inputMat(matrix2,rows2,cols2);
            multiplyMat(matrix1,matrix2,rows1,cols1,rows2,cols2,result);
            printMat(result,rows1,cols1,"MULTIPLICATION");
            break;

            case 0:
            printf("EXITING PROGRAM......");
            printf("HAVE A NICE DAY");
            break;

            default:
            printf("INVALID CHOICE......Try Again!!");
            break;
            }
        }
    return 0;
}
