#include <stdio.h> // Include the standard input-output library

void addition() {
    int num1, num2, sum; // Declare three integer variables

    // Prompt the user to enter two numbers
    printf("Enter two integers: ");

    // Read the two integers from the user and store them in num1 and num2
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sum to the user
    printf("Sum: %d\n", sum);

    // return 0; // Indicate successful program execution
}
