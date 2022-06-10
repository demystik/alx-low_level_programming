#include "main.h"

/**
 * print_square - This method prints square using #
 * @size: the size of the square
 * Description: to print sqaure
 * Return: nothing
 */

void print_square(int size)
{
int m,n;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (n = 1; n < = size; n++)
{
for (m = 1; m <= size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
