#include <stdio.h>

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // Base case: Move the last disk directly
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary using target as helper
    towerOfHanoi(n - 1, source, auxiliary, target);

    // Step 2: Move the nth disk from source to target
    printf("Move disk %d from %c to %c\n", n, source, target);

    // Step 3: Move n-1 disks from auxiliary to target using source as helper
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n; // Number of disks

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Solve the Tower of Hanoi problem
    printf("Source: A, Target: C, Temp: B\n");
    printf("The sequence of moves are:\n");
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}

