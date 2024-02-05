#include<stdio.h>
int fact(int n){
    if(n==1)
        return 1;
    
    if(n==0)
        return 0;
    else 
        return n * fact(n-1);
    }
int main(){
    int c;
    c = fact(5);
    printf("%d",c); 
    return 0;
}