#include <stdio.h>
#include "main.h"
/**
 * function that prints a string, followed by a new line
 * Return: Always 0 (success)
 */
void _puts(char *str);
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
