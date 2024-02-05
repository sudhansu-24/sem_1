#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, n;
    int *b;

    printf("ENTER A NUMBER FOR PRE INCREMENT/DECREMENT:");
    scanf("%d", &a);
    printf("AFTER PRE INCREMENT:%d\n", ++a);
    printf("AFTER PRE DECREMENT:%d\n", --a);

    printf("ENTER A NUMBER FOR POST INCREMENT/DECREMENT:");
    scanf("%d", &n);
    printf("AFTER POST INCREMENT:%d\n", n++);
    printf("AFTER POST DECREMENT:%d\n", n--);

    int x;
    float y;
    char ch;
    double z;

    printf(" The size of the int (x) variable is: %lu", sizeof(x));
    printf(" \n The size of the float (y) variable is: %lu", sizeof(y));
    printf(" \n The size of the char (ch) variable is: %lu", sizeof(ch));
    printf(" \n The size of the double (z) variable is: %lu", sizeof(z));

    b = &a;
    printf(" \n The value of variable a is: %d", a);
    printf(" \n The address of variable b is: %p", (void *)b);

    bool bool_a = true;
    bool bool_b;
    bool_b = !bool_a;

    printf(" \n The Boolean value of a is: %d", bool_a);
    printf(" \n The Boolean value of b is: %d", bool_b);

    bool c = 0;
    bool d = !c;
    printf(" \n The Boolean value of c is: %d", c);
    printf(" \n The Boolean value of d is: %d", d);

    printf("\nSUDHANSU SEKHAR ROLL NO 42\n");  

    return 0;
}
