// Program to use bit wise Operator as (&,|,^,<<,>>)

#include <stdio.h>  

int main()
{ 

    int a,b,x;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    // x=a&b;
    // printf("bitwise &=%d\n",x);
    printf("bitwise AND=%d\n",a&b);

    printf("bitwise OR=%d\n",a|b);

    printf("bitwise EX-OR=%d\n",a^b);

    printf("left shift=%d\n",a<<2,b<<2);

    printf("right shift=%d\n",a>>1,b>>1);

    return 0;
}