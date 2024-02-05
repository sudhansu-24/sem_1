#include <stdio.h>
int main (){
    int a,b,n = 0,c;
    printf("ENTER FIRST OPERAND: \n");
    scanf("%d",&a);
    printf("ENTER SECOND OPERAND: \n");
    scanf("%d",&b);
    printf("ENTER 1 FOR ADDITION \n");
    printf("ENTER 2 FOR SUBTRACTION \n");
    printf("ENTER 3 FOR MULTIPLICATION \n ");
    printf("ENTER 4 FOR DIVISION \n");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("AFTER ADDTION THE VALUE IS %d \n",a+b);
    break;
    case 2:
    printf("AFTER ADDTION THE VALUE IS %d \n",a-b);
    break;
    case 3:
    printf("AFTER ADDTION THE VALUE IS %d \n",a*b);
    break;
    case 4:
    printf("AFTER ADDTION THE VALUE IS %d \n",a/b);
    break;
    default:
    printf("Invalid Choice Existing....");
    }
    return 0;
}
