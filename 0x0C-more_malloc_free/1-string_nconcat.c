#include "main.h"

/**
 * string_nconcat - This function concatenates two string
 * @s1: pointer to a string s1
 * @s2: pointer to the string s2 which will append s1
 * @n: The number of bytes of s2 to append with s1
 * Return: The base address to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, i, total, count, end;
	char *ptr;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	if (s2 == NULL)
		s2 = "";
	else
		for (n2 = 0; n2 < n && s2[n2] != '\0'; n2++)
			;
	total = n1 + n2 + 1;
	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (count = 0; count < n1; count++)
		ptr[count] = s1[count];
	end = n1;
	for (i = 0; i < n2; i++)
	{
		ptr[end] = s2[i];
		end++;
	}
ptr[end] = '\0';

return (ptr);
}
