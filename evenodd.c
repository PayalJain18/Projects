#include <stdio.h>

int main() {
    int number, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate remainder when divided by 2
    remainder = number % 2;

    // Check if the number is even or odd using a switch statement
    switch (remainder) {
        case 0:
            printf("Even");
            break;
        case 1:
            printf("Odd");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
