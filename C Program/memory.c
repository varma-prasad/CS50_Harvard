// memory related mistakes
// segmentation fault
// memory leak when free is not used

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x = malloc(3*sizeof(int));
	x[0] = 87;
	*(x+1) = 90;
	printf("1:%i,2:%i\n",x[0],x[1] );
	free(x);
}
