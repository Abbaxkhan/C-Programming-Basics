
#include <stdio.h>

void odd_or_even(int n);

int main()
{
    int n;
    printf("Enter the number you want to check: ");
    scanf("%d", &n);
    odd_or_even(n);

    return 0;
}

void odd_or_even(int n)
{
    int x;
    int even_sum = 0;
    int odd_sum = 0;
 
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            // printf("%d is an even number.\n", x);
            even_sum = even_sum + x;
        }
        else
        {
            // printf("%d is an odd number.\n", x);
            odd_sum = odd_sum + x;
        }
    }

    printf("\nSum of all even numbers: %d\n", even_sum);
    printf("Sum of all odd numbers: %d\n", odd_sum);
}
