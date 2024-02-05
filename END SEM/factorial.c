#include<stdio.h>
int main(){
    int n,fact = 1;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++){
        fact = fact * i;
        }
    printf("FACTORIAL THE NUMBER IS %d",fact);
    return 0;
}