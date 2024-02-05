#include <stdio.h>

void tower_of_hanoi(int n, char source, char target, char auxiliary) {
    if (n > 0) {
        tower_of_hanoi(n - 1, source, auxiliary, target);
        printf("Move disk %d from %c to %c\n", n, source, target);
        tower_of_hanoi(n - 1, auxiliary, target, source);
    }
}

int main() {
    int num_disks;

    printf("Enter the number of disks for Tower of Hanoi: ");
    scanf("%d", &num_disks);

    if (num_disks <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        tower_of_hanoi(num_disks, 'A', 'C', 'B');
    }
    
    printf("\nSUDHANSU SEKHAR ROLL NO.42");
    
    return 0;
    
}

