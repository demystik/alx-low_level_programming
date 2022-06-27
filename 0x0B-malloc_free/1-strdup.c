#include "main.h"

/**
 * _strdup - This function returns a pointer to a newly allocated space
 * @str: This is the string pointer
 *
 * Return: return pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *buffer;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	buffer = malloc(sizeof(char) * size + 1);

	if (buffer == NULL)
		return (NULL);

	if (sizeof(*buffer) != sizeof(*str))
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];
return (buffer);
}
