#include "main.h"

/**
 * cap_string - This function captalize all words of the string
 *
 * Description: This method captalize all words of the string
 * Return: The char pointer should be return
 */

char *cap_string(char *ptr)
{
	int i, count;

	while (*(ptr + count) != '\0')
	{
		count++;
	}
	
	for (i = 0; i <= count; i++)
	{
		putchar('k');	
		if (ptr[i] == ' ')
		{
			if (*(ptr + i + 1) >= 'a' && *(ptr + i + 1) <= 'z')
			{
				/** ptr = ptr + i + 1; */
				ptr -= 32;
			}
		}
	
	}

	
return (ptr);


}

