#include "main.h"

/**
 * print_diagonal - This program prints diagonal
 * @n: The number of diagonal
 * Description: nothing joor
 * Return: nothing
 */

void print_diagonal(int n)
{
int count = 0, size;
if (n > 0)
{
while (count < n)
{
for (size = 0; size < count; size++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
count++;
}
}
else
{
_putchar('\n');
}
}
