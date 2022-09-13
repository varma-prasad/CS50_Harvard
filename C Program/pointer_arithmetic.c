#include <stdio.h>

int main()
{
    char *s = "varma";
    printf("%c\n",*s);
    printf("%c\n",*(s+1));            // *(s+1)--[], shift 1 byte in char

    int num[] = {2,5,4,6};
    printf("%i\n",*num);                
    printf("%i\n",*(num+1));            // pointer moves 4bytes in int
    printf("%i\n",*(num+2));
}