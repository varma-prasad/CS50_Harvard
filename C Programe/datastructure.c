#include <stdio.h>

typedef struct datastructure
	{
		char name[10];
		char phone[10];	
	}person;

int main(void)
{
	person p1 = {"varma","9739924201"};
	person p2 = {"venu","9902411209"};
	printf("contents of a structure p1 are:\n");
	printf("Name: %s\n",p1.name);
	printf("Phone: %s\n",p1.phone);
	printf("contents of a structure p2 are:\n");
	printf("Name: %s\n",p2.name);
	printf("Phone: %s\n",p2.phone);

}
 	