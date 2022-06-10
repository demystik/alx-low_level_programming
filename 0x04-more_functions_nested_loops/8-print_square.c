#include "main.h"

/**
 * print_square - This method prints square using #
 * @size: the size of the square
 * Description: to print sqaure
 * Return: nothing
 */

void print_square(int size)
{
int col,row;

if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
