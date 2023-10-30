#include<stdio.h>
void main()
{
	int i, sum=0;
	for(i=1;i<=102;i++)
	{
		if(i%2==0)
		{
			printf("\neven  number = %d", i);
			sum = sum + i;
//			printf("\nsum= %d", sum);		
		}
		
	}
	printf("\nsum= %d", sum);
}
