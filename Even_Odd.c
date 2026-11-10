// Program to find Even or Odd
#include <stdio.h>
int main()

{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even number\n");
        printf("\n %d is even number\n", num);
    }

    else
    {
        printf("Odd number\n");
        printf("\n %d is odd number\n", num);
    }
    printf("\nDone\n");

    return 0;
}