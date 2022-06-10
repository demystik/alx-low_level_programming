#include "main.h"

/**
 * more_numbers - This procedure prints numbers 10 times
 *
 * Description: To print numbers
 * Return: nothing
 */

void more_numbers(void)
{

int n, i;

for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
