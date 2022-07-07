#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This function iterator elements of an array and..
 * @array: the name of the array given
 * @size: the size of the array
 * @action: the name of the embeded function
 * Return: nothing to return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		if (size)
			for (i = 0; i < size; i++)
				action(array[i]);
	}


}
