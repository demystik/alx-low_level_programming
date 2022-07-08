#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	va_start (ptr, n);

	for (i = 0; i < n; i++)
	{
		 printf("%s", va_arg(ptr, char*));

		if (i < n - 1 && separator != NULL)
		{
			printf("%c ", *separator);
		}
	}

printf("\n");
}
