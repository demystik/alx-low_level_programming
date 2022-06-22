#include "main.h"

/**
 * _puts_recursion - This function prints a string followed by a new line
 * @s: This is a pionter to the string
 * Description: the above is enough
 * Return: return void
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}

else
{

_putchar('\n');

}

}
