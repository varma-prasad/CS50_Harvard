#include <stdio.h>
#include <string.h>
#include <stdlib.h>					// malloc function
#include <ctype.h>

int main(void)
{
	char *s = "varma";
	char *t = s;
	t[0]=toupper(s[0]);					// both t & s pointing to same address location (shallow copy)
	printf("t:%s\n",t);					// upper case
	printf("s:%s\n",s);					// upper case
	char *r = malloc(strlen(s)+1);  	// memory allocation should include null charcater space too(extra byte)
	if (r == NULL)						// no memory in ram
	{
		return 1;						// error message
	}
	int n = strlen(s)+1;
	for (int i=0;i<n;i++)				// copy can be done with 'strcopy' function
	{
		r[i] = s[i];				// copying to different pointer address labels (Deep copy)
	}
	if (strlen(r)>0)				// execute only when string is present
	{
		r[2]=toupper(s[2]);
	}
	printf("%s\n",r);				// upper case
	printf("%s\n",s);				// lower case
	free(t);						// free the memory allocated to t
	return 0;

}
