#include "main.h"

/**
 * puts2 - The function that prints every other char
 * @str: pointer to the char to get printed
 *
 * Return: nothing nothing
 */
void puts2(char *str)
{

char c;
int len;

len = 0;
while (str[len] != '\0')
	len++;
len--;

if (len % 2)
{


c = *(str + count);
_putchar(c);
}

_putchar('\n');

}
