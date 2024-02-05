#include<stdio.h>
int main(){
    int rows,space,k;
    printf("ENTER NUMBER OF ROWS: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for( space=rows;space>i;space--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("*  ");
        }
    printf("\n");
    }
return 0;
}