#include "main.h"

/**
 * print_line - This sub-routine prints straight line
 * @n: The number of line to be printed
 * Description: To print line
 * Return: bla bla bla
 */

void print_line(int n)
{

int m;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (m = 1; m <= n; m++)
{
_putchar('_');
}
_putchar('\n');
}

}
