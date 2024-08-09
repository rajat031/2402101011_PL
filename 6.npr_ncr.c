#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate permutations nPr
int permutations(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Function to calculate combinations nCr
int combinations(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Input values for n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. Ensure that 0 <= r <= n.\n");
        return 1;
    }

    // Calculate and display permutations and combinations
    printf("Permutations (nP_r): %d\n", permutations(n, r));
    printf("Combinations (nC_r): %d\n", combinations(n, r));

    return 0;
}