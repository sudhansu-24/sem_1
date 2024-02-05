#include<stdio.h>
int main(){
    int a=1,b=1,sum=0,n;
    printf("Enter Nth term for fibonaaci series: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum =  a + b;
        a = b;
        b = sum;
    }
    printf("fibonacci series for nth term  %d is %d",n,sum);
    
    return 0;
}