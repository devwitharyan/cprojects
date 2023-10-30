#include<stdio.h>
void main()
{
	int mul, n, i;
	printf("Enter a number:- ");
	scanf("%d", &n);
	for(i=1;i<=10;i=i+1)
	{
		mul = n * i;
		printf("\n%d * %d = %d",n, i, mul);
	}
}
