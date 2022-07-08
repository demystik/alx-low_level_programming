#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers follow by a new line
 * @separator: a string that separates ints
 * @n: number of int passed as an argument
 * Return: nothing to return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	va_start(ptr, n);


	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(ptr, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s ", separator);
	}

printf("\n");


va_end(ptr);
}
