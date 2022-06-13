#include "main.h"

/**
 * puts2 - The function that prints every other char
 * @str: pointer to the char to get printed
 *
 * Return: nothing nothing
 */

void puts2(char *str)
{
int len;
char l;

for (len = 0; *(str + len) != 0; len++)
{
if (len % 2 == 0)
{
l = *(str + len);
_putchar(l);
}
}
_putchar('\n');
}
