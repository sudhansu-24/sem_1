#include <stdio.h> 

int main() {
    int a, b, c;

    printf("ENTER A VALUE FOR a:");
    scanf("%d", &a);
    printf("ENTER A VALUE FOR b:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping value of a is %d\n", a);
    printf("After Swapping value of b is %d\n", b);
    printf("SUDHANSU SEKHAR ROLL NO 42");
    return 0;
}

