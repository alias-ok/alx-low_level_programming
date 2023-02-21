#include "main.h"
/**
 * _isalpha - Entry point that checks for alphabetic characters
 * @c: The character to be checked
 * Return: return 1 for alphabetic presence and 0 for absence
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
