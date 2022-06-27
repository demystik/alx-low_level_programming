#include "main.h"

/**
 * create_array - This function creates an array of chars & init it
 * @size: The size of the buffer
 * @c: The char to initialize it with
 * Return: return NULL if size = 0 else returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *buffer;

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;
return (buffer);
}

