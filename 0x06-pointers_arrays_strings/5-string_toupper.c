#include <stdio.h>
#include "main.h"
/**
 * function that changes all lowercase letters of a string to uppercase.
 * Return: Always
 */
char *string_toupper(char *)
{
int length;
length = 0;
while (word[length] != '\0')
{
if (word[length] >= 97 && word[length] <= 122)
{
word[length] = word[length] - 32;
}
length++;
}
return (word);
}
