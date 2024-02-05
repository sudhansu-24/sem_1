#include <stdio.h>
#include <math.h>

int main() {
    int p, t, n;
    float r, compound_interest;

    printf("ENTER THE PRINCIPAL AMOUNT : ");
    scanf("%d", &p);
    printf("ENTER THE RATE OF INTEREST : ");
    scanf("%f", &r);
    printf("ENTER TIME PERIOD : ");
    scanf("%d", &t);
    printf("ENTER THE NUMBER OF TIMES THE INTEREST IS COMPOUNDED : ");
    scanf("%d", &n);

    printf("SIMPLE INTEREST IS %d\n", (int)(p * r * t / 100.0));

    compound_interest = p * (powf(1 + r / 100.0 / n, n * t)) - p;
    printf("COMPOUND INTEREST IS %f\n", compound_interest);

    printf("SUDHANSU SEKHAR ROLL NO 91\n");

    return 0;
}
