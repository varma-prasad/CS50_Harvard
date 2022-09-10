#include <stdio.h>

int main(void)
{
	const int MINE = 2;
	int p;
	
	printf("enter your points: ");
	scanf("%d",&p);
	if (p<MINE)
	{
		printf("\n %d is greater",MINE);
	}
	else if (p>MINE)
	{
		printf("\n %d is greater",p);
	}
	else
	{
		printf("\n %d and %d are equal",p,MINE);
	}
}