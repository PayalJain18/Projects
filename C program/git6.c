#include<stdio.h>
#include<conio.h>
int main(){
    float sum = 0;
    int average;
    int n;

    printf("enter the value of n");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; 
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; ++i) {
        float number;
        printf("Enter number %d: ", i + 1);
        scanf("%f", &number);
        sum += number;
    }

    
    average = sum / n;
    printf("Average of the %d numbers is: %.2f\n", n, average);

    return 0;
}
    
