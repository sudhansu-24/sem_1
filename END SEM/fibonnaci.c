#include<stdio.h>
int main (){
    int a=1,b=1,sum=0,n,temp,i;
    printf("ENTER A Nth term : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum = temp;                                 //WRONG CODE
        temp=a+b;                                   //WRONG CODE
        a=b;                                        //WRONG CODE
        printf("THE SUM IS : %d",sum);
    }
    return 0;
}