#include "main.h"

/**
 * _strbrk - This funciton searches a string for any set of bytes
 * @s: The pointer to a char that have the string
 * @accept: The pointer to a char to that compare with the string
 * Return: return a pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
return (s + i);
}
}
return ('\0');
}
