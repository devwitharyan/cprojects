//remaining to dooo
#include<stdio.h>
void main()
{
	int n, i;
	printf("Enter a number:- ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n its has factors");
		}
        else
        {
            printf("number is perfect");
        }break;
	}
}
