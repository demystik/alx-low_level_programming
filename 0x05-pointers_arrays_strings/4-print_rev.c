#include "main.h"

/**
 * print_rev - Method that prints string in reverse
 * @s: A pointer to a char
 *
 * Return: void
 */

void print_rev(char *s)
{
int count;

for (count = (s['\0'] - 10); s[count] >= 0; count--)
{
_putchar(s[count]);
}

_putchar('\n');
}
