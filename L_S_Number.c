// program to find count of even and odd numbers from Array
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter 10 elements:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);		//Reading
	int largest = a[0];
	int smallest = a[0];	
	for(i=1;i<10;i++)
	{
		if(a[i] > largest)
			largest = a[i];
		if(a[i] < smallest)
			smallest = a[i];
	}
	printf("smallest number=%d\n",largest);
	printf("Largest number=%d",smallest);		

	return 0;
}