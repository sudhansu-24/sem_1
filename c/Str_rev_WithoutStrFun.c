#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int a, b;
    for (a = 0, b = length - 1; a < b; a++, b--) {
        char temp = str[a];
        str[a] = str[b];
        str[b] = temp;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    reverseString(input);

    printf("Reversed string: %s\n", input);

    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
