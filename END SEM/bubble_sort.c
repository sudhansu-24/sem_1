#include <stdio.h>

int main() {
    int i, j, temp, n;

    printf("ENTER SIZE OF THE ARRAY: \n");
    scanf("%d", &n);

    int a[n];
    printf("ENTER VALUES IN ARRAY: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Corrected outer loop condition
    for (i = n - 1; i >= 0; i--) {  // Start from n-1 and iterate down to 0
        for (j = 0; j < i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("SORTED ARRAY : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
