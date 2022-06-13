#include "main.h"

/**
 * print_array - This function prints array of integers
 * @a: pointer to an integer
 * @n: number of integers to get printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
int count;

for (count = 0; count < n; count++)
{
printf("%i", a[count]);
if (count != (n - 1))
{
printf(", ");
}
}
printf(" ");
}
