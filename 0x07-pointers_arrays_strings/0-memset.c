#include "main.h"

/**
 * _memset - This function fills the memory with constant byte
 * @s: The pointer to the memory area
 * @b: The constant byte
 * @n: The number of bytes to fill the memory with
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}

return (s);
}
