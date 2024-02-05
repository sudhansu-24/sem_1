#include <stdio.h>

void callByValue(int a, int b);
void callByReference(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;

    // Call by value
    printf("Before Call by Value: num1 = %d, num2 = %d\n", num1, num2);
    callByValue(num1, num2);
    printf("After Call by Value: num1 = %d, num2 = %d\n", num1, num2);

    // Call by reference
    printf("\nBefore Call by Reference: num1 = %d, num2 = %d\n", num1, num2);
    callByReference(&num1, &num2);
    printf("After Call by Reference: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nSUDHANSU SEKHAR ROLL NO 42");
    return 0;
}

void callByValue(int a, int b) {
    a = a * 2;
    b = b * 2;
    printf("Inside Call by Value: a = %d, b = %d\n", a, b);
}

void callByReference(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    printf("Inside Call by Reference: *a = %d, *b = %d\n", *a, *b);
}



