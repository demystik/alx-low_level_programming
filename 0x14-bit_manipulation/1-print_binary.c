#include "main.h"

/**
 * print_binary - This function prints binary representation of a number
 * @n: The pointer to the number to convert
 *
 * Return: nothing to return
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
