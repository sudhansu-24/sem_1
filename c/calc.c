#include<stdio.h>

int main() {
    int x, y, A, B, C, D, E;

    printf("ENTER FIRST NUMBER: ");
    scanf("%d", &x);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d", &y);

    A = x + y;
    B = x - y;
    C = x * y;
    D = x / y;
    E = x % y;

    printf("\nThe SUM of number is %d \n", A);
    printf("The SUBTRACTION of number is %d \n", B);
    printf("The MULTIPLICATION of number is %d \n", C);
    printf("The DIVISION of number is %d \n", D);
    printf("The REMAINDER of number is %d \n", E);
    printf("SUDHANSU SEKHAR ROLL NO 42");
    return 0;
}


