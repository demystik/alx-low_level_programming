#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The pointer to the string
 *
 * Return: nothing to return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	putchar(*s);
}
