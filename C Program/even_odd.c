#include <stdio.h>

int main(void)
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	if (n%2 == 0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
}