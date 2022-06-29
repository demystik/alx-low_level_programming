#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: The pointer to the string
 *
 * Return: return the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		s++;
		return (1 + _strlen_recursion(s));
}
