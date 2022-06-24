#include "main.h"

/**
 * _strlen - A function that returns the lenght of a string
 * @s: A pointer to a char
 *
 * Return: The lenght of a string
 */

int _strlen(char *s)
{

int count, sum;

sum = 0;

for (count = 0; s[count] != '\0'; count++)
{
sum += count;

}

return (count);

}
