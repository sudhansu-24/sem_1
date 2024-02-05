#include <stdio.h>

// Function prototypes
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

    return 0;
}

// Function to demonstrate call by value
void callByValue(int a, int b) {
    a = a * 2;
    b = b * 2;
    printf("Inside Call by Value: a = %d, b = %d\n", a, b);
}

// Function to demonstrate call by reference
void callByReference(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    printf("Inside Call by Reference: *a = %d, *b = %d\n", *a, *b);
}
