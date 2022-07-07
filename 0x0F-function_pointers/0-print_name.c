#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name using a callbak pointers
 * @name: char pointer to the name that should get printed
 * @f: embeded function passing to the previous function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}

}
