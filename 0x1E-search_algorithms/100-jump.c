#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <math.h>

/**
 * j_search - subJumpSearch function
 * @ptr: pointer to the array
 * @value: value to search for
 * @l: left index
 * @r: right index
 * @size: size of the array
 * @step: jump step
 * Return: the found index
 */
int j_search(int *ptr, size_t size, int value, size_t l, size_t r, size_t step)
{
	printf("Value checked array[%d] = [%ld]\n", ptr[l], l);
	/**
	 * if (ptr[r] == value)
		return (ptr[r]);
	*/
	if (ptr[r] < value && !(r > size))
	{
		l = r;
		r += j_step;
		return (j_search(ptr, size, value, l, r, step));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", l, r);
		/* Searching value is within right and left index */
		while (!(ptr[l] == value) && (l < size - 1))
		{	printf("Value checked array[%d] = [%ld]\n", ptr[l], l);
			l++;
			if (ptr[l] == ptr[size - 1])
				break;
		}
		printf("Value checked array[%d] = [%ld]\n", ptr[l], l);
		if (ptr[l] == value)
			return (ptr[l]);
	}
return (-1);
}



/**
 * jump_search - searches for a value in a sorted array of int using JSA
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index if found number
 */
int jump_search(int *array, size_t size, int value)
{
	int index;
	size_t l, r, j_step = sqrt(size);

	l = array[0];
	r = j_step;

	if (array == NULL)
		return (-1);
	index = j_search(array, size,  value, l, r, j_step);
	return (index);
}
