#include "function_pointers.h"
/**
 * int_index - Entry func that returns the index of the first ele
 * @array: array
 * @size: size of array
 * @cmp: pointer to the func to be used to compare values
 * Return: Always 0 for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
