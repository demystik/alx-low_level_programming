#include "main.h"

/**
 * _memcpy - This function copies the memory area
 * @dest: The destination for copied area
 * @src: The source where area is copied from
 * Return: returns the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while ((i <= n) || src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
