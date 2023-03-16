#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry func that contains all the values
 * @min: minimum value
 * @max: maximum value
 * Return: THe pointer to the new array
 */
int *array_range(int min, int max)
{
	int j;
	int *l;

	if (min > max)
	{
		return (NULL);
	}
	l = malloc(sizeof(*l) * ((max - min) + 1));
	if (l == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++, min++)
	{
		l[j] = min;
	}
	return (l);
}
