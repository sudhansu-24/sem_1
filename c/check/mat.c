#include<stdio.h>

void inputMat(float matrix[10][10],int rows,int cols){
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows;++i){
        for(int j=0;j < cols;++j){
            printf("ENTER elements at position (%d,%d):",i+1,j+1);
            scanf("%f",&matrix[i][j]);
        }
    }
}

