#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - This program prints the last digit
 *
 * Description: To print last digit
 * Return: Return the value of the last digit
 */

int print_last_digit(int num)
{

int res;

if (num < 0)
	num = -num;

res = num % 10;

if (res < 0)
	res = -res;

putchar(res + '0');

return (res);

}
