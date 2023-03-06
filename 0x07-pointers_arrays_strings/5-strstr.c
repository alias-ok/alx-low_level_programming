#include "main.h"
/**
 * _strstr - Entry function that locates a substring
 * @haystack: First pointer input
 * @needle: Second pointer input
 * Return: ...
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;
		if (haystack[j] == needle[j])
		{
			do
			{
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;
			}
			while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}
