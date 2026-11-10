#include <stdio.h>

int main()

{

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Distinction");
    else if (marks > 59)
        printf("First Division");
    else if (marks > 49)
        printf("Second Division");
    else if (marks > 39)
        printf("Third Division");
    else printf("Fail");
}