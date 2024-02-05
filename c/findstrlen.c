#include <stdio.h>

int findStrLen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    int length = findStrLen(input);

    printf("Length of the string: %d\n", length);

    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
