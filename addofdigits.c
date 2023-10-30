#include<stdio.h>
void main()
{
	int num, rem, sum, count=0;
	
	printf("Enter a number:- ");
	scanf("%d", &num);
	
	while (num > 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
		count++;
	}	
	printf("count = %d", count);
	printf("\nsum = %d", sum);	
}
