#include "main.h"


/**
 * _strchr - This function locates a character in a string
 * @s: This is a pointer to a char
 * @c: This is a character
 * Return: return s
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;

for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
return ('\0');
}
