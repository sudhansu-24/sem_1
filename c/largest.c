#include <stdio.h>

int main() {
    int i, j, k, larg;

    printf("ENTER VALUE OF 1:");
    scanf("%d", &i);

    printf("ENTER VALUE OF j:");
    scanf("%d", &j);

    printf("ENTER VALUE OF k:");
    scanf("%d", &k);

    if (i >= j && i >= k) {
        larg = i;
    } else if (j >= i && j >= k) {
        larg = j;
    } else {
        larg = k;
    }

    printf("The Largest among these is %d", larg);
    printf("\nSUDHANSU SEKHAR ROLL NO 91");
    return 0;
}



