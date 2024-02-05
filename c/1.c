#include <stdio.h>
int main(){
    int i,factorial=1,no;
    printf("ENTER A NUMBER FOR WHICH YOU WANT TO FIND FATORIAL : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        factorial=factorial*i;
    }
    printf("FACTORIAL FOR %d IS %d",no,factorial);
    return 0;
}