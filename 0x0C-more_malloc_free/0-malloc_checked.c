#include "main.h"

/**
 * malloc_checked - This function allocate memory using malloc
 * @b: This size of memory to allocate
 *
 * Return: return address of the allocated memory
 */

void *malloc_checked(unsigned int b)
{

char *pointer;

pointer = malloc(b);
if (pointer == NULL)
{
	exit(98);
}
return (pointer);
}
