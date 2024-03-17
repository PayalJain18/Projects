#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simple_interest, compound_interest;
    int compounding_frequency;

    // Input values for principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Input compounding frequency (for Compound Interest)
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compounding_frequency);

    // Calculate Compound Interest
    compound_interest = principal * (pow((1 + rate / compounding_frequency), (compounding_frequency * time))) - principal;

    // Display results
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
