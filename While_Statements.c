#include<stdio.h>

int main()

{


    int i = 1, sum = 0;

    printf("Enter the Number: ");
    scanf("%d", &i);
    while(i <=5)

    
    {

        sum= sum+i;
        i++;
    }
    printf("sum =%d", sum);
}