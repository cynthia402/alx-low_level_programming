#include "main.h"
/**
 * s_prime_number - says if an integer is a prime number or not
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int evaluate_num(int num, int iterator)
{
if (iterator == num - 1)
{
return (1);
}
else if (num % iterator == 0)
{
return (0);
}
if (num % iterator != 0)
{
return (evaluate_num(num, iterator + 1));
}
return (0);
}
int is_prime_number(int num)
{
int iterator;
iterator = 2;
if (num < 2)
{
return (0);
}
if (num == 2)
{
return (1);
}
return (evaluate_num(num, iterator));
}
