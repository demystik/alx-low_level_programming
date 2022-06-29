#include "main.h"

/**
 * str_concat - This routine concat two strings
 * @s1: Destination to allocate the memory
 * @s2: The source string
 * Return: return a pointer to the newly allocated space in the memory
 */

char *str_concat(char *s1, char *s2)
{

	unsigned int n1, n2, j1, j2, i, size;
	char *buffer;

	n1 = n2 = j1 = j2 = size = 0;

	if (s1 == NULL)
		s1 = '\0';
	else
	{
		while (s1[n1] != '\0')
		n1++;
	}

	if (s2 == NULL)
		s2 = '\0';
	else
	{
		while (s2[n2] != '\0')
			n2++;
	}

	size = n1 + n2;

	buffer = malloc(sizeof(char) * size + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if ((s1[j1] != '\0') && (s1 != NULL))
		{
			buffer[i] = s1[j1];
			j1++;
		}
		else
		{
			buffer[i] = s2[j2];
			j2++;
		}
	}
return (buffer);
}
