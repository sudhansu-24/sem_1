#include <stdio.h>

int main() {
    int num, rem, og, bin = 0, place = 1;

    printf("ENTER A NUMBER:");
    scanf("%d", &num);

    og = num;

    while (num > 0) {
        rem = num % 2;
        num = num / 2;

        bin = bin + (rem * place);
        place = place * 10;
    }

    printf("BINARY FOR NUMBER %d IS %d.", og, bin);
    
    printf("\nSUDHANSU SEKHAR ROLL NO 42");
    return 0;
}
