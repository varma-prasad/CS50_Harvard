#include <stdio.h>
#include <stdlib.h>

// node have space for 1)the address of value stored and 2)the pointer
typedef struct node
{
	int number;
	struct node *next;
}
node;

int main(void)
{
	// list of size
	node *list = NULL;

	// Add a number to list
	node *n = malloc(sizeof(node));
	if(n==NULL)
	{
		return 1;
	}
	n->number = 1;
	n->next = NULL;

	// update list to pint to new node

	list = n;

	// Add another number to the list
	n = malloc(sizeof(node));
	if(n==NULL)
	{
		free(list);
		return 1;
	}	
	n->number = 2;
	n->next = NULL;
	list->next = n;

	// Add number to the list again
	n = malloc(sizeof(node));
	if(n==NULL)
	{
		free(list->next);						// pointers need not be freed,only variable address needs to be freed
		free(list);
		return 1;
	}	
	n->number = 3;
	n->next = NULL;
	list->next->next = n;

	// print numbers
	for(node *tmp = list;tmp != NULL;tmp = tmp->next)
	{
		printf("%i\n",list->number);
	}

	// free list
	while (list != NULL)
	{
		node *temp = list->next;
		free(list);
		list = temp;
	}
	return 0;
}