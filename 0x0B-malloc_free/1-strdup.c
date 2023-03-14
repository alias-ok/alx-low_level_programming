#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Entry func that returns pointer to a newly allocated space in mem
 * @str: char
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	char *naa;
	int i, r = 0;

	if (str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	naa = malloc(sizeof(char) * (i + 1));
	if (naa == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[r]; r++)
	{
		naa[r] = str[r];
	}
	return (naa);
}
