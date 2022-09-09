#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[10];
	printf("enter a sttring: ");
	scanf("%[^\n]%*c",&s);				// %s to does not read blank space

	for (int i = 0,length = strlen(s);i<length;i++)
	{
		printf("%c",s[i]);
	}
}