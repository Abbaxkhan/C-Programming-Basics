// Program to evaluate the expressions y=(ax+b)/(ax-b) in C

#include <stdio.h>

int main()

{

    int a, x, b, y;
    printf("Enter three Numbers: ");
    scanf("%d %d %d", &a, &x, &b);
    y = (a * x + b) / (a * x - b);
    printf("Result of the Expression=%d\n", y);
    return 0;
}