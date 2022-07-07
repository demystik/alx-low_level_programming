#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - This function searches for an integer in an array
 * @array: The name of the array in which the elements are
 * @size: The number of the elements in the array array
 * @cmp: The pointer to a function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check == 1)
			return (i);
	}
	return (-1);
}
