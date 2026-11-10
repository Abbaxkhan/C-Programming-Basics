// Average marks of student

#include <stdio.h>

int main()
{
    int marks[3], i;
    float average, sum = 0;
    char grade;

    printf("Enter marks of 3 subjects: ");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 3;
    printf("Average marks: %.2f\n", average);

    // Determine grade based on average
    if(average >= 80)
        grade = 'A';
    else if(average >= 60)
        grade = 'B';
    else
        grade = 'C';

    printf("Grade: %c\n", grade);

    return 0;
}