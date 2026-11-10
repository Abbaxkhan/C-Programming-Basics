#include <stdio.h>

int main()
{
    float m1, m2, m3, average;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}