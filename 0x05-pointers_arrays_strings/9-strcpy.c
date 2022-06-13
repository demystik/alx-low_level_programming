#include "main.h"

/**
 * *_strcpy - This function copy string
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int i, m;

for (i = 0, m = 0; src[i] != '\0'; m++, i++)
{

dest[m] = src[i];

}
dest[m] = '\0';
return (dest);

}
