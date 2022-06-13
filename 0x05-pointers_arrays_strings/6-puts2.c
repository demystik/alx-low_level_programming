#include "main.h"

/**
 * puts2 - The function that prints every other char
 * @str: pointer to the char to get printed
 *
 * Return: nothing nothing
 */
void puts2(char *str)
{

int count;
int l;

for (count = 0; *(str + count) != '\0'; count+=2)
{
l = *(str + count);
_putchar(l);
}

_putchar('\n');
}
