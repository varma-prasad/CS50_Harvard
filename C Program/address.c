#include <stdio.h>

int main(void)
{
	int n = 50;
	int *p = &n;					// *p is pointer, address value of the variable n (* indicates about address not regular int)
	printf("%p\n",p );
	char c[] = "HI!";				// char *c = "HI!" (adress of 1st character in the array:string)
	char *q = &c[0];
	printf("%p\n",q);				// same address
	printf("%p\n",c);				// same address
}

