// Program to print 'n'numbers

#include<stdio.h>

int main()

{

    int i=1,n,sum=0;
    printf("Enter numbers:");
    scanf("%d" ,&n);
    while (i<=5)
    {

        printf("%d\t", i);
        i++;
    }
    printf("\nSum =%d", sum);
}