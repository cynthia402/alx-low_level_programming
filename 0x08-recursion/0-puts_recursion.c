#include "main.h"
/**
 * main - prints a string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s);
if(*s)
{
_putchar(*s);
puts_recursion(s + 1);
}
else
_putchar('\n');
}
