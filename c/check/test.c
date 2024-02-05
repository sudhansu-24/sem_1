#include<stdio.h>
void intputMat(int matrix[10][10],int rows,int cols){
    printf("ENTER THE MATRIX ELEMENTS--\n");
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            printf("ENTER ELEMENT AT POSITION (%d,%d): ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
//CHECK AGAIN THE PRINT FUCNTION FOR MATRIX

//-----------------------------------------------------------------------------------------------


void printMAt(int matrix[10][10],int rows,int cols,const char *lable){         
    printf("\n%s Matrix:\n",lable);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
        printf("%d\t",matrix[i][j]);
        }
    printf("\n");
    }
}

//---------------------------------------------------------------------------------------------


int main(){
    int matrix[10][10],rows,cols;
    char *result;
    printf("ENTER NO. OF ROWS AND COLS YOU WANT IN THE MATRIX: ");
    scanf("%d %d",&rows,&cols);
    intputMat(matrix,rows,cols);
    printMAt(matrix,rows,cols,result);    //CHECK AGAIN THE PRINT FUCNTION FOR MATRIX
    return 0;
}
