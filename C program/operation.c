#include <stdio.h>

int main() {
    int num;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ensure the input is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Display the initial number
        printf("Sequence:\n");
        printf("%d\n", num);

        // Compute and display the sequence until the value becomes 1
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;  // If the number is even, halve it
            } else {
                num = (num * 3) + 1;  // If the number is odd, multiply by 3 and add 1
            }
            printf("%d\n", num);
        }
    }

    return 0;
}
