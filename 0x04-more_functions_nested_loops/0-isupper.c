#include "main.h"
/**
 * _isupper - Entry point that checks for uppercase letters
 * @c: Accepts or stores the variable c
 * Return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
