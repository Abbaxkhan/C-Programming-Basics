// Write a program to find the count of even number and odd from given array of elements.

#include <stdio.h>

int main() {
    int a[5], i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
    evenCount++;
        else
     oddCount++;
    }

    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

    return 0;
}

