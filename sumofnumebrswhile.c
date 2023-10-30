//a. Write a program to find the sum of all natural numbers from 1 to N using a while loop.
#include<stdio.h>
void main()
{
	int n=5, sum=0, i=1;
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("\n%d", sum);
}
