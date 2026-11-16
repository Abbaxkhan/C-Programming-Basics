// Write a program to compute x power y using fuctions.

#include<stdio.h>
void power(int x, int y);
int main()
{   
    int x, y;
    printf("Enter the base number: ");
    scanf("%d", &x);
    printf("Enter the exponent number: ");
    scanf("%d", &y);
    power(x, y);
    return 0;

}

void power(int x, int y)
{
    int result = 1;
    for (int i = 1; i <= y; i++)
    {
        result = result * x;
    }
    printf("%d raised to the power of %d is: %d\n", x, y, result);
}

