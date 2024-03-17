#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display temperature in Celsius
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}
