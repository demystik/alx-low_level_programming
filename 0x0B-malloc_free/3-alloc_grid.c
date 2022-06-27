#include "main.h"

/**
 * alloc_grid - This function returns pointer to a 2 dimemsional array
 * @width: The width of the array
 * @height: The height of the array
 * Return: the pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
	for (w = 0; w < height; w++)
	{
		array[w] = malloc(sizeof(int) * width);
		if (array[w] == NULL)
		{
			for (w--; w >= 0; w--)
				free(array[w]);
			free(array);
			return (NULL);
		}
	}


	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}

return (array);
}
