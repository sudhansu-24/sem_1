#include<stdio.h>
int main (){
    int n,rem,weight=1,decimal=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    while(n != 0){
        rem = n % 10;
        decimal = decimal + rem*weight;
        n = n / 10;
        weight=weight*2;
        }
    printf("DECIMAL NUMBER:%d",decimal);
    return 0;
}