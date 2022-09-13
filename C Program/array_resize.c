#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Dynamically allocate an array of size 3
	int *list = malloc(3*sizeof(int));
	if (list == NULL)
	{
		return 1;
	}
	// assign 3 numbers to that array 
	list[0] = 1;						
	list[1] = 2;
	list[2] = 3;

	// time passes

	// Allocate new array of size 4
	int *temp = malloc(4*sizeof(int));					
	if (temp == NULL)
	{
		free(list);
		return 1;
	}

	// copy numbers fromold array to new array
	for (int i = 0;i<3;i++)
	{
		temp[i] = list[i];
	}
	// add 4th element
	temp[3] = 4;

	// free old array
	free(list);
	list = temp;

	for(int i=0;i<4;i++)
	{
		printf("%i\n",list[i] );
	}
	// free new array
	free(list);											// whenever you use heap memory variables, free them afterwards
	
	// if memory available grows array size orelse moves to newchunkof memory and free automatically
	int *aut = realloc(list,4*sizeof(int));	
	if(aut == NULL)
	{
		free(list);
		return 1;
	}
	aut[3] = 4;

	return 0;
}