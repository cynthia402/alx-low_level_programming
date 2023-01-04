#include "main.h"
/**
 * strpbrk() function locates the first occurrence in the string s 
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept);
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
