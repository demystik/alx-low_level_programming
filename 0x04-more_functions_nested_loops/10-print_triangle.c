#include "main.h"

/**
 * print_triangle - This method prints triangle
 * @size: the size of the triangle
 * Description: to print triangle
 * Return: void
 */

void print_triangle(int size)
{
int row, col, space, s;

space = size - 1;

for (row = 1; row <= size; row++)
{
for (s = 1; s <= space; s++)
{
_putchar(' ');
}
for (col = 1; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
space--;
}

}
