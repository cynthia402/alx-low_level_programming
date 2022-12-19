#include <stdio.h>
#include "main.h"
/**
 * function that prints every other character of a string, starting with the first character
 * Return: Always 0 (Sucess)
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
