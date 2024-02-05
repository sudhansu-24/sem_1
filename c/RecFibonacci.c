#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void printFibonacci(int m) {
    printf("First %d Fibonacci numbers are: ", m);
    for (int i = 0; i < m; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int m;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &m);

    if (m < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printFibonacci(m);

    printf("SUDHANSU SEKHAR ROLL NO 42");
    

    return 0; 
}

