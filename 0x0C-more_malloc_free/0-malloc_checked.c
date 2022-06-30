#include "main.h"

/**
 * malloc_checked - This function allocate memory using malloc
 * @b: This size of memory to allocate
 *
 * Return: return address of the allocated memory
 */

void *malloc_checked(unsigned int b)
{

void *pointer;

pointer = malloc(sizeof(b));
if (pointer == NULL)
{
	exit(98);
}
return (pointer);
}
