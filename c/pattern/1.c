#include <stdio.h>
int main (){
    int rows,i,j;
    // char a='A';
    printf("No. of rows: ");
    scanf("%d",&rows);
    for (i=rows;i>=1; i--){
         for(j=rows; j>=i ;j--) {
        printf("* ");
        }
        printf("\n");
    }
return 0;    
}