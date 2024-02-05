#include<stdio.h>
int main(){
    int a=10,b=20,*p,s=0;
    p=&a;
    a++;
    (*p)++;
    s = a + b + *p ; //44
    printf("%d \n",s);
    return 0;
}