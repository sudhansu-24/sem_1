#include<stdio.h>
int main(){
    int rows;
    char ch = 'A';
    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=i;j++){
            printf("%c",(char)(ch + i));        //TYPE CASTING
        }
    printf("\n");
    }
}