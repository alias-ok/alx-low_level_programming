#include "main.h"
/**
 * _strcmp - Entry function that compares two strings
 * @s1: First parameter to store string
 * @s2: second parameter
 * Return: if str1 < str2, the negative difference of the first unmatched char
 *         if str1 == str2, 0
 *         if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
