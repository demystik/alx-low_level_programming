#include "main.h"

/**
 * _strncat - This function concat n number of strings
 * @dest: The destinatin of the strings
 * @src: The source of the strings
 * @n: The number of strings to concatenate
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int count;
int count2;

count = 0;
count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 < n)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
{
break;
}

count++;
count2++;
}
return (dest);
}
