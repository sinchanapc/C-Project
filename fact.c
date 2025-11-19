#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    // Handle factorial of 0
    else if (n == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    // return 0;
}
