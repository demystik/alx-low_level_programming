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

if(n <= 15)
{
for(num = 0; num <= n; num++)
{
for(nums = 0; nums <= n; nums++)
{
printf("%3d, ", num * nums);
}
printf("\n");
}
}

}
