#include <stdio.h>
#include "main.h"
/**
 * function that concatenates two strings
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src);
{
int i;
int j;
i = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
