#include "main.h"
/**
 * strpbrk() function locates the first occurrence in the string s 
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept);
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
return (s);
}
s++;
}
return ('\0');
}
