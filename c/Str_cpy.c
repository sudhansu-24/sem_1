#include <stdio.h>

void stringCopy(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string (str1): ");
    scanf("%s", str1);

    stringCopy(str1, str2);

    printf("Copied string (str2): %s\n", str2);

    printf("\nSUDHANSU SEKHAR ROLL NO.42\n");

    return 0;
}
