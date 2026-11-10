#include <stdio.h>

int main()

{

    float area, perimeter, radius;

    printf("Enter the radius of circle: ");

    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    perimeter = 2 * 3.14 * radius;

    printf("Area of circle = %.2f\n", area);
    printf("Perimeter of circle = %.2f\n", perimeter);

    return 0;
}