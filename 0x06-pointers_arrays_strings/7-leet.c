#include "main.h"

/**
 * leet - This functions encode some chars
 *
 * Description: This function encodes some chars
 * Return: char
 */

char *leet(char *ptr)
{
int count, len;
len = 0;
while (*(ptr + len) != '\0')
{
	len++;
}
for (count = 0; count <= len; count++)

{

if (*(ptr + count) == 'a' || *(ptr + count) == 'A')
*(ptr + count) = '4';

if (*(ptr + count) == 'e' || *(ptr + count) == 'E')
*(ptr + count) = '3';

if (*(ptr + count) == 'o' || *(ptr + count) == 'O')
*(ptr + count) = '0';

if (*(ptr + count) == 't' || *(ptr + count) == 'T')
*(ptr + count) = '7';

if (*(ptr + count) == 'l' || *(ptr + count) == 'L')
*(ptr + count) = '1';

}

return (ptr);


}
