#include "main.h"

/**
 * swap_int - Sub-routine that swap the values of 2 integer values
 * @n: The first integer 
 * @b: The second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int *c;
int m;

c = &m;
*c = *a;
*a = *b;
*b = *c;
}
