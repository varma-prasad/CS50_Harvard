#include <stdio.h>

int main(void)
{
	int a[10],i,x,n;
	printf("enter how many elements: ");
	scanf("%i",&n);
	printf("Enter array elements:n");
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%i",&x);

	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
    		break;
		}
	}
	if(i<n)
	    printf("element found at %i position",i+1);
	else
	    printf("element not found");
}