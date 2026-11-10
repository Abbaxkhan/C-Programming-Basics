// Program to initailze and display the values
// Program to read and display the array elements
#include <stdio.h>
int main()

{
    int i, b[10];
    int a[10] = {20, 45, 25, 60, 70};
    for (i = 0; i < 5; i++)
        
    printf("%d", a[i]);
    printf("Enter 5 elements:\n");
    for (i = 0; i< 5; i++)
        
    scanf("%d", &b[i]);
    printf("Array Elements are:\n");
    for (i = 0; i < 5; i++)
       
    printf("%d\n", b[i]);
}