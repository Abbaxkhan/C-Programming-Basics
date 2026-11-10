// program to illestrate simple-if statement
#include <stdio.h>

int main()
{

    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    if (age >= 18)

    {
        printf("\n You are eligible to vote\n");

    }
    else
    {
        printf("\n You are not eligible to vote\n");
    }
    printf("\nDone\n");
}
