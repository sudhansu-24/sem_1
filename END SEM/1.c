#include<stdio.h>
int main(){
    int place=1,n,rem,bin=0;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&n);
    while(n>0){
        rem = n % 2;
        n = n / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("BINARY NUMBER IS %d\n",bin);
}

