#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using LSA
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * value: value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	for (i = 0; array[i] != NULL; i++)
	{
		if(array[i] == value)
		{
			printf("found! %d %d \n", array[i], value);
		}

	}
}
