#include "main.h"

/**
 * argstostr - This function concatenates all args
 * @ac: The number of args passed to it
 * @av: This pointer to the list of the string passed to it
 * Return: return the pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, c, j, ia;
	char *ptr;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	ptr = malloc((c + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			ptr[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			ptr[ia] = av[i][j];
	}
	ptr[ia] = '\0';
	return (ptr);

}


