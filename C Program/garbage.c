#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int scores[3];				// array isnot initialised, which gives 'Garbagge values'
	for (int i=0;i<3;i++)
	{
		printf("%i\n",scores[i] );
	}
} 
