#include "main.h"
/**
 * _atoi - Entry function that converts a string to an integer
 * @s: Pointer parameter to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int m = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[m])
	{
		if (s[m] == 45)
		{
			min += -1;
		}
		while (s[m] >= 48 && s[m] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[m] - '0');
			m++;
		}
		if (isi == 1)
		{
			break;
	        }
		m++;
	}
	ni *= min;
	return (ni);
}
