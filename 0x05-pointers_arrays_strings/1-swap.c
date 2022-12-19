#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps
 * Return: Always 0 (sucess)
 */
void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
