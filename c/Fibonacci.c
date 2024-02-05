#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("First %d Fibonacci numbers are: ", n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printFibonacci(n);

    printf("\nSUDHANSU SEKHAR ROLL NO.42");
    return 0; 
}
