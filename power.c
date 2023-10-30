//Question :- 22
#include<stdio.h>
void main ()
{
	int i, ans=1, base, p;
	printf("Enter two numbers base and power:-");
	scanf("%d%d", &base,&p);
	while(i < p)
	{
		ans = ans * base;
		i++;	
	}
	printf("Answer is:- %d", ans);
}
	
