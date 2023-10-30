//Calculate the factorial of a given number using a for loop.
//factorial of 3! = 3*2*1=6
#include<stdio.h>
void main()
{
	int num, count, fact = 1;
	printf("Enter a number:- ");
	scanf("%d", &num);
	
	for(count=1; count <= num; count++)
	{
		fact = fact * count;
		
	}
	printf("%d", fact);

}
