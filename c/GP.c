#include <stdio.h>

int main() {
    int i, term, first, ratio, sum = 0, value;

    printf("Enter the number of terms in the GP: ");
    scanf("%d", &term);

    printf("Enter the first term of the GP: ");
    scanf("%d", &first);

    printf("Enter the common ratio of the GP: ");
    scanf("%d", &ratio);
    if (ratio == 0) {
        printf("Error: Common ratio cannot be zero. Exiting program.\n");
        return 1;  
    }
    value = first;
    printf("The series of the GP is:\n");
    for (i = 0; i < term; i++) {
        printf("%d ", value);
        sum += value;
        value *= ratio;
    }

    printf("\nThe sum of the GP series till %d terms is %d\n", term, sum);
    printf("SUDHANSU SEKHAR, ROLL NO 42\n");
    return 0;
}
