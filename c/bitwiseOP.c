#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Bitwise AND
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, num1 & num2);

    // Bitwise OR
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, num1 | num2);

    // Bitwise NOT
    printf("Bitwise NOT: ~%d = %d\n", num1, ~num1);

    // Bitwise XOR
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, num1 ^ num2);

    // Left shift
    printf("Left Shift: %d << %d = %d\n", num1, num2, num1 << num2);

    // Right shift
    printf("Right Shift: %d >> %d = %d\n", num1, num2, num1 >> num2);
    printf("\nSUDHANSU SEKHAR ROLL NO 42");

    return 0;
}

