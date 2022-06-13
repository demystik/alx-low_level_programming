#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: a pointer that points to a char
 *
 * Return: void
 */

void rev_string(char *s)
{

int count, len;
char l;

for (len = 0; *(s + len) != '\0'; len++)
{
}
len--;


for (count = 0; count <= len; count++)
{
l = *(s + len);
*(s + len) = *(s + count);
*(s + count) = l;
len--;

}
}
