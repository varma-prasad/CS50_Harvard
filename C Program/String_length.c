#include <stdio.h>
#include <string.h>

int length(char s[10]);

int main(void)
{
	char s[10];
	printf("enter the string: ");
	scanf("%[^\n]%*c",&s);				// %s to does not read blank space
	printf("the length of the string is: %d",length(s));
	printf("\n the length of the string is: %d",strlen(s));
}

int length(char s[10])
{

	
	int i = 0;
	while (s[i] !='\0')
	{
		i++;
	}
	return i;
}

// there will be built in functions for many useful operations 
	//use them from header files