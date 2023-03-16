#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Entry func hat reallocates a memory block
 * @ptr: pointer to the mem previously allocated
 * @old_size: size in bytes of new mem block
 * @new_size: size in bytes of the new mem block
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
