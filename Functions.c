include<stdio.h>



    int add(int a, int b);
    int main()
{

    int sum, x, y;
    printf("Enter values");
    scanf("%d %d", &x, &y);
    sum = add(x, y);
    printf("Addition of 2 numbers is: %d", sum);
    return 0;


}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}