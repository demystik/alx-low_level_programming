#include "main.h"


/**
 * _demystik - This function allocate content of old to new reallocate
 * @p: pointer to the old memory
 * @np: pointer to the new memory
 * @old: size of old memory
 * @new: size of the new memory
 * Return: return pointer to the new allocate memory
 */

int *_demystik(int *p, int *np, unsigned int old, unsigned int new)
{
        unsigned int i;

        for (i = 0; i < old; i++)
        {
                np[i] = p[i];
        }

        return (np);
}


/**
 * _realloc - this function reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 * Return: The base address of the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;
	unsigned int total;


	if (new_size == old_size)
		return (ptr);


	if (ptr == NULL)
	{
		ptr = malloc(sizeof(int) * new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}

	}
	

	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}

	  if (new_size > old_size)
        {
		total = sizeof(int) * (old_size + new_size);
		n_ptr = malloc(total);
                _demystik(ptr, n_ptr, old_size, new_size);
                return (n_ptr);
        }
return (n_ptr);
}
