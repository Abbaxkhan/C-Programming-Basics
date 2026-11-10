// Write program of Assignment Opperators and increment/decrement operators 


#include <stdio.h>

int main ()
{

int x,y,z,p;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
// Assignment operators
z=10; 
printf("z value is %d\n",z);
z+=5;
printf("z value is %d\n",z);
z-=5; p*=5; p=z;
printf("z value is %d and p value is %d\n",z,p);
z*=5, p/=5;
printf("z value is %d and p value is %d\n",z,p);
z/=5; p+=5;
printf("z value is %d and p value is %d\n",z,p);
// Increment and decrement operators
z=++x, z=x++;
printf("z value is %d\n",z);
p=--y, p=y--;
printf("p value is %d\n",p);

return 0 ;

}
