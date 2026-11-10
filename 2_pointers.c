// Write a program to declare & initialize 2 pointers variables and do modification and printing of values & addressesboth pointers as well as variables



#include <stdio.h>

int main()

{

    int x = 10, y = 20;
    int *p1 = &x, *p2 = &y;

    printf("X value: %d\n", x);
    printf("Y value: %d\n", y);
    printf("x address: %p\n", &x);
    printf("y address: %p\n", &y);
    *p1 = *p1 + 5;
    *p2 = *p2 + 5;
    printf("Value pointed by p1: %d\n", *p1);
    printf("Value pointed by p2: %d\n", *p2);

    printf("X value after modification: %d\n", x);
    printf("Y value after modification: %d\n", y);
    return 0;
}