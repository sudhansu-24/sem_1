#include<stdio.h>
void callbyvalue(int a,int b);
void callbyreference(int *a,int *b);

int main(){
    int num1,num2;
printf("ENTER VALUE FOR NUM1:");
scanf("%d",&num1);
printf("VALUE FOR NUM2: ");
scanf("%d",&num2);
//call by value
printf("\nVALUE BEFORE CALL BY VALUE: NUM1 is %d NUM2 is %d",num1,num2);
printf("\n");
callbyvalue(num1,num2);
printf("\n");
printf("\nVALUE AFTER CALL BY VALUE: NUM1 is %d NUM2 is %d",num1,num2);
printf("\n");
//call by reference
printf("\nVALUE BEFORE CALL BY REFERENCE: NUM1 is %d NUM2 is %d",num1,num2);
printf("\n");
callbyreference(&num1,&num2);
printf("\n");
printf("\nVALUE AFTER CALL BY REFERENCE: NUM1 is %d NUM2 is %d",num1,num2);
printf("\n");
printf("\n");
printf("THANK YOU!!! HAVE A GOOD DAY!!!!!!!!!!BYe\n");
return 0;
}
void callbyvalue(int a,int b){
    a = a*2;
    b = b*2;
    printf("\nVALUE INSIDE CALL BY Value function: NUM1 is %d and NUM2 is %d",a,b);
    return;
}

void callbyreference(int *a,int *b){
    *a = *a * 2;
    *b = *b * 2;
    printf("\nVALUE INSIDE CALL BY Reference function: NUM1 is %d and NUM2 is %d",*a,*b);
    return;
}