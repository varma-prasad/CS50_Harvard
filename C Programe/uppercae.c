#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char s[10];
	printf("Enter the string: ");
	scanf("%[^\n]%*c",&s);
	for (int i=0,n=strlen(s);i<n;i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c",s[i]-32);			// ASCII code
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	
	printf("\n --------------------------------------\n");

	for (int i=0,n=strlen(s);i<n;i++)
	{
		if (islower(s[i]) != 0)
		{
			printf("%c",toupper(s[i]));			// built in function
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}