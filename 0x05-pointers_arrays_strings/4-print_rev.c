#include <stdio.h>
#include "main.h"
/**
 * function that prints a string, in reverse, followed by a new line
 * Return: Always success
 */
void print_rev(char *s)
{
int i = 0;
int o;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (o = i; o > 0; o--)
_putchar(*s);
s--;
}
_putchar('\n');
}
