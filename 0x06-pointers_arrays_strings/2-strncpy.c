#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: The destination of the string
 * @src: The source of the string
 * @n: The number of the string to copies
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}
