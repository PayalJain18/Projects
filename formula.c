#include <stdio.h>
#include <math.h>

int main() {
    double a, b, x, result;

    // Input values for a, b, and x
    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);


    result = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(x));

    // Display the result
    printf("Result: %lf\n", result);

    return 0;
}