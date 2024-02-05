#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter no. of ROWS will be:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
return 0;    
}