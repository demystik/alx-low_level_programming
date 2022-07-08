#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This variadic function returns sum of all paras.
 * @n: unsigned integer parameter
 *
 * Return: return sum of ints or returns 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ptr;

	unsigned int i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
