#include "main.h"

/**
 * print_square - This method prints square using #
 * @size: the size of the square
 * Description: to print sqaure
 * Return: nothing
 */

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else if (size <= 0)
{
_putchar('\n');
}
}
