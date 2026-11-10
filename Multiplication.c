#include<stdio.h>

int main()

{

    int num1, num2, Product;

    printf("Enter two numbers: ");

    scanf("%d %d", &num1, &num2);

    Product = num1 * num2;

    printf("Product = %d\n", Product);

    printf("Product of %d and %d is %d\n", num1, num2,Product);

    return 0;

}