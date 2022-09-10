#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		printf("Enter the number");
		scanf("%d",&n);
	}
	while (n < 1);

	for (int i = 0;i < n; i++)
	{
		printf("?");
	}
	printf("\n");

	printf("-------------------------------------\n");

	int m;
	do
	{
		printf("Enter the number");
		scanf("%d",&m);
	}
	while (m < 1);

	for (int i = 0;i < m; i++)				// for each row
	{
		for (int j=0;j < m; j++)			//for each column
		{

			printf("#");
		}
	printf("\n");	
	}
	
}