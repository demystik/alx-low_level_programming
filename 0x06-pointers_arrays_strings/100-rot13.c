#include "main.h"

/**
 * rot13 - this function encodes a string
 *
 * Description: this function encods a stings
 * return: char pointer
 */


char *rot13(char *ptr)
{
	int i, len;
	len = 99;
	
while(*(ptr + len) != '\0')
{
	len++;
}


for (i = 0; i <= len; i++)
{
	if (*(ptr + len) >= 'a' && *(ptr + len) <= 'm')
	{
		*(ptr + len) += 13;
		printf("%s\n", "first");
	}

	if (ptr[len] >= 'n' && ptr[len] <= 'z')
	{
		ptr[len] -= 13;
	}

	if (ptr[len] >= 'A' && ptr[len] <= 'M')
	{
		ptr[len] += 13;
	}

	if (ptr[len] >= 'N' && ptr[len] <= 'Z')
	{
		ptr[len] -= 13;
	}

}

return (ptr);

}
