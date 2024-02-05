#include <stdio.h>
void callbyvalue(int a,int b);
void callbyreference(int *a,int *b);

int main(){
    int num1=10,num2=20;
    //CallbyValue
    printf("\nBefore CallbyValue: NUM1 is %d and NUM2 is %d",num1,num2);
    callbyvalue(num1,num2);
    printf("\nAfter CallbyValue: NUM1 is %d and NUM2 is %d",num1,num2);
    //CallbyReference
    printf("\nBefore CallbyReference: NUM1=%d and NUM2=%d",num1,num2);
    callbyreference(&num1,&num2);
    printf("\nBefore CallbyReference: NUM1=%d NUM2=%d",num1,num2);
    return 0;
}

void callbyvalue(int a, int b){
    a = a * 2;
    b = b * 2;
    printf("\nINSIDE CallbyValu: function NUM1=%d and NUM2=%d",a,b);
}

void callbyreference(int *a,int *b){
    *a = *a * 2;
    *b = *b * 2;
    printf("\nINSIDE CallbyRefereNUM NUM1=%d and NUM2=%d",*a,*b);
}