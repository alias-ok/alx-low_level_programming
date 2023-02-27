#include "main.h"
/**
 * _strlen - Entry function that returns the length of a string
 * @s: String parameter
 * Return: returns lenght of a string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
