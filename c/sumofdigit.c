#include <stdio.h>
int main() {
    int n,sum=0,r,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("SUM OF DIGIT IS %d FOR THE NUMBER %d.",sum,a);
    printf("\nSUDHANSU SEKHAR ROLL NO 42");
    return 0;
}




