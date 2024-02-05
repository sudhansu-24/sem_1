#include <stdio.h>

int main() {
    int i, j;
    char input, alphabet = 'A';

    printf("Enter an uppercase character you want to print in the last row: ");
    scanf(" %c", &input);

    if (input < 'A' || input > 'Z') {
        printf("Invalid input. Please enter an uppercase character.\n");
        return 1;  
    }

    for (i = 1; i <= (input - 'A' + 1); ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }

    printf("SUDHANSU SEKHAR ROLL NO 42\n");
    return 0;
}

