#include "main.h"

/**
 * print_diagonal - This program prints diagonal
 * @n: The number of diagonal
 * Description: nothing joor
 * Return: nothing
 */

void print_diagonal(int n)
{
int m, j;

if (n <= 0)
{
putchar('\n');
}
else
{
for ( m = 1; m <= n; m++)
{
for (j = 1; j < m; j++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}


_putchar('\n');
}
}
