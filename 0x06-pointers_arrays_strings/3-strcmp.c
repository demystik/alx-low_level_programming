#include "main.h"

/**
 * _strcmp - This function compares two string
 * @s1: The first string to compare
 * @s2: The second string to get printed
 * Return: The diff between the two strings
 */

int _strcmp(char *s1, char *s2)
{
int res;

if(*(s1 + 0) == *(s2 + 0))
return (0);

else
res = *(s1 + 0) - *(s2 + 0);


return (res);
}
