#include "variadic_functions.h"
/** print_strings - prints str
* @separator: pointer param
* @n: param
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (index != (n - 1) && separator != NULL)
}
printf("\n");
va_end(strings);
}
