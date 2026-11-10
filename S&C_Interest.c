// Program for simple and Compound Interest

#include <stdio.h>

int main ()

{
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);

    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}