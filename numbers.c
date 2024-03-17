#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, sumOfDigits, sumOf1stAnd3rdDigits;

    // Input a 3-digit integer
    printf("Enter a 3-digit integer: ");
    scanf("%d", &number);

    // Extract individual digits
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    // Calculate the sum of all digits
    sumOfDigits = digit1 + digit2 + digit3;

    // Calculate the sum of the 1st and 3rd digits
    sumOf1stAnd3rdDigits = digit1 + digit3;

    // Display results
    printf("Sum of all digits: %d\n", sumOfDigits);
    printf("Sum of 1st and 3rd digits: %d\n", sumOf1stAnd3rdDigits);

    return 0;
}

