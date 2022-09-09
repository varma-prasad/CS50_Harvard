#include <stdio.h>
#include <stdlib.h>

// creating a tree having value address and two pointers

typedef struct node
{
	int number;
	struct node *left;
	struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
	// tree of size 0
	node *tree = NULL;

	// Add number to list
	node *n = malloc(sizeof(node));
	if(n != NULL)
	{
		return 1;
	}
	n->number = 2;
	n->left =NULL;
	n->right =NULL;
	tree = n;

	// Add another number to list

	n = malloc(sizeof(node));
	if(n != NULL)
	{
		// free memory
		return 1;
	}
	n->number = 1;
	n->left =NULL;
	n->right =NULL;
	tree->left = n;

	// Add another number to list

	n = malloc(sizeof(node));
	if(n != NULL)
	{
		// free memory
		return 1;
	}
	n->number = 3;
	n->left =NULL;
	n->right =NULL;
	tree->right = n;

	// print tree
	print_tree(tree);

	// free tree
	free_tree(root);
}

void free_tree(node *root)
{
	if (root == NULL)
	{
		return;
	}
	free_tree(root->left);
	free_tree(root->right);
	free_tree(root);
}

void print_tree(node *root)
{
	if (root == NULL)
	{
		return;
	}
	print_tree(root->left);									// datastructure is recursive type
	printf("%i\n",root->number);
	print_tree(root->right);
}