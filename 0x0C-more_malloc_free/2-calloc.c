#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry func, that allocates memory for an array
 * @nmemb: variable storing an array
 * @size: variable storing the size of each element
 * Return: 0 for success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *r;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	r = malloc(nmemb * size);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		r[i] = 0;
	return (r);
}
