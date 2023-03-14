#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point that creates an array of chars & initializes it
 * @size: Size of int
 * @c: store value of char
 * Return: A pointer to the array and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
