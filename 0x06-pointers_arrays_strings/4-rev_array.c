#include <stdio.h>
#include "main.h"
/**
 * function that reverses the content of an array of integers
 * Return: success
 */
void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
