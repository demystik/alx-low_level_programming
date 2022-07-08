#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
	}

printf("\n");


va_end(ptr);
}
