#include <stdio.h>

int sum_of_natural_numbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_of_natural_numbers(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of first %d natural numbers: %d\n", num, sum_of_natural_numbers(num));
    }

    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
