#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int s = 0; s < rows - i - 1; s++) {
            printf(" ");
        }

        // Print numbers in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", (int)nCr(i, j));
        }

        printf("\n");
    }

    return 0;
}
