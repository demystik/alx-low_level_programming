#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints time table
 * @n: The input integer
 *
 *
 * Return: The value of n
 */

void print_times_table(int n)
{
int num, nums;

if (!(n > 15) && !(n < 0))
{
for (num = 0; num <= n; num++)
{
for (nums = 0; nums <= n; nums++)
{
if (nums != n)
{
printf("%3d", num * nums);
printf(", ");
}
else
{
printf("%d", num * nums);

}

}
printf("\n");
}
}

}
