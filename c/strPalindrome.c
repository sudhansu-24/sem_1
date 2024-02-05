#include <stdio.h>
#include <string.h>

int is_palindrome_recursive(char str[], int left, int right) {
    if (left >= right) {
        return 1;
    }

    if (str[left] != str[right]) {
        return 0;
    }

    return is_palindrome_recursive(str, left + 1, right - 1);
}

int is_palindrome(char str[]) {
    return is_palindrome_recursive(str, 0, strlen(str) - 1);
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (is_palindrome(input)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    printf("\nTANISHQUE ROLL NO.90\n");

    return 0;
}
