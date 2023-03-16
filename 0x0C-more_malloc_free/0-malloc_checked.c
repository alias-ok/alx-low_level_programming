#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry func that  allocates memory using malloc
 * @b: Set paramater for int
 * Return: pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
