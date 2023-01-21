#include "variadic_functions.h"
/**
 *  sum_them_all - adds num
 *  @n: param
 *  Return: int
 */
int sum_them_all(const unsigned int n, ...
{
va_list vls;
unsigned int i = 0;
va_start(vls, n);
while (i < n)
{
printf("%d", va_arg(vls, int));
i++;
if (i < n && (separator))
printf("%s", separator);
}
putchar(10);
va_end(vls);
}
