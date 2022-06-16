#include "main.h"

/**
 * string_toupper - This function convert strings to uppercase
 *
 * Description: This function conver
 * Return: return char
 */

char *string_toupper(char *ptr)
{

int n, count;
count = 0;
while (ptr[count] != '\0')
{
count++;
}


for (n = 0; n <= count; n++)
{
if (ptr[n] >= 'a' && ptr[n] <= 'z')
ptr[n] -= 32;
}

return (ptr);
}
