#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: This is a pointer to main character
 * @accept: This is a pointer to initial seg
 * Return: return char
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int j, l, k, i = 0;

while (s[i] != '\0')
	i++;

for (j = 0; j <= i; j++)
{
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (s[j] == accept[k])
		{
			for (l = 0; l <= i; l++)
			{
				if (s[l] == 32)
					return (l - 1);
			}

		}


	}

}

return (l - 1);
}
