#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: The pointer to char
 *
 * Return: void
 */

void puts_half(char *str)
{
int len, n, count;
char var;

for (len = 1; *(str + len) != '\0'; len++)
{
}

if (len % 2 == 0)
{
n = len/2;
for (count = n; *(str + count) != '\0'; count++)
{
var = *(str + count);
_putchar(var);
}
}


else
{
n = (len - 1) / 2;
for (count = n; *(str + count) != '\0'; count++)
{
var = *(str + count);
_putchar(var);
}
}

_putchar('\n');
}
