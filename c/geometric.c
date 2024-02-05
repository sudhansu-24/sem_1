#include <stdio.h>
#include <math.h>
int main() {
    int a, n, r;
    double s;
    printf("\nEnter the first term of the series:");
    scanf("%d", &a);
    printf("\nEnter the number of terms in the series:");
    scanf("%d", &n);
    printf("\nEnter the common ratio in the series: ");
    scanf("%d", &r); 

    s = a * ((1 - pow(r, n + 1)) / (1 - r));

    printf("The sum of the geometric series is: %lf", s);
    return 0;
}
