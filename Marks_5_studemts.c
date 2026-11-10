// Write a program to find total marks of a student in 5 subject using nested functions.

#include <stdio.h>
void total();
float average(int ,int);
int main()
{
    total();

}

void total()
{
   int s1, s2, s3, s4, s5, total_marks;
   printf("Enter marks of 5 subjects: ");
   scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
   total_marks = s1 + s2 + s3 + s4 + s5;
   float res=average(total_marks,5);

   printf("Average marks: %.2f\n", res);
}
float average (int total, int n)
{
    return total / (float)n;
}