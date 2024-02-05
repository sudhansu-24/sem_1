#include<stdio.h>
int main(){
    int n;
    int isPrime = 1;
    printf("ENTER THE NUMBER: \n");
    scanf("%d",&n);
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            isPrime = 0;
        }
    }
    if (isPrime){
        printf("%d IS A PRIME NUMBER",n);
    }
    else{
        printf("%d IS A COMPOSITE(NOT PRIME) NUMBER",n);
    }
    return 0;
}