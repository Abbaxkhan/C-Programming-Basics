// Example of Explicit Conversion

#include<stdio.h>

int main()
{
    char ch ='7';
    int num;
int total=17, count=5;
float average;
average= total/count;
printf("Before type casting result is : %f\n",average);
average= (float)total/count;
//  17.0/5=3.4 correct !

// (float)17 =17.0
printf("After type casting result is: %f",average);
return 0;
num=(int)ch;
printf("\n num=%d",num);
}