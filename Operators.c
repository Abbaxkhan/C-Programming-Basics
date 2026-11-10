// Program use Relational operators and logical operators and conditinal operators
#include <stdio.h>

int main ()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("x = %d, y = %d\n", x, y);

    // Relational operators and conditional operators
x>y ? printf("x is greater than y\n") : printf("x is not greater than y\n");
x>y && x<10 ? printf("x=%d\n",x) : printf("y=%d\n",y);
x<y || x>55 ? printf("x=%d\n",x) : printf("y=%d\n",y);

    return 0;   
}


