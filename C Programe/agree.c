#include <stdio.h>

int main(void)
{
	char c;
	printf("Do you agree?: ");
	scanf("%c",&c);
	if (c == 'y' || c == 'Y')
	{
		printf("\n agreed!");
	}
	else if (c == 'n' || c == 'N')
	{
		printf("\n disagree!");
	}
}