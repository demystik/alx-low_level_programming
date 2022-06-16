#include "main.h"

/**
 * _strcat - This function concat two strings
 * @src: This source string
 * @dest: This destinatin string
 * Return: returns void
 */


char *_strcat(char *dest, char *src)
{
int i = 0;
int count;

while (*(dest + i) != '\0')
	i++;

for (count = 0; *(src + count) != '\0'; count++)
{

*(dest + i) = *(src + count);
i++;

}
*(dest + i) = '\0';

return (dest);

}
