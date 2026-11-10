// Simple calculator

#include <stdio.h>

int main()
{
    char op = '*';

    int a, b, c;
    printf("\nEnter Choice/operator:");
    scanf("%c", &op);
    printf("Enter  Two Numbers: ");
    scanf("%d%d", &a, &b);
    switch (op)
    {
    case '+':
        c = a + b;
        printf("Addition=%d", c);
        break;

    case '-':
        c = a - b;
        printf("Subraction=%d", c);
        break;
    case '/':
        c = a / b;
        printf("Division=%d", c);
        break;
    case '*':
        c = a * b;
        printf("Multiply=%d", c);
        break;

    default:
        printf("Invalid Operation");
    }
}