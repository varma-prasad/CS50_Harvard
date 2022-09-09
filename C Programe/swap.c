#include <stdio.h>
void swap(int a,int b);
void swap1(int *c,int *d);

int main(void)
{
	int x = 1;
	int y = 4;
	printf("x: %i, y: %i\n",x,y);
	swap(x,y);
	printf("x: %i, y: %i\n",x,y);
	swap1(&x,&y);
	printf("x: %i, y: %i\n",x,y);
}
void swap(int a,int b)					// pass by value
{
	int temp = a;
	a = b;
	b = temp;
	printf("x: %i, y: %i\n",a,b);
}
void swap1(int *c,int *d)					// pass by reference
{
	int temp = *c;
	*c = *d;
	*d = temp;
	printf("x: %i, y: %i\n",c,d);
}