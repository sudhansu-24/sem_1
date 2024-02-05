#include <stdio.h>
int main(){
    int sum=0,rem,n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    while(n>0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("SUM OF DIGIT IS %d",sum);
    return 0;
}