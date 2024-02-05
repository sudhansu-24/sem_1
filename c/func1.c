#include <stdio.h>

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(){
    int a,b,k;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    printf("ENTER A NUMBER");
    scanf("%d",&b);
    k = sum(a,b);
    printf("%d",k);
    return 0;
}