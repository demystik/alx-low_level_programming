#include "main.h"

/**
 * print_rev - Method that prints string in reverse
 * @s: A pointer to a char
 *
 * Return: void
 */

void print_rev(char *s)
{
int l;

l = 0;
while (*(s + l) != '\0')
l++;
l--;
for (; l >= 0; l--)
_putchar(*(s + l));
_putchar('\n');
}
