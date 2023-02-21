#include "main.h"
/**
 * _islower - Entry point that checks for lowercase character
 *
 * Return: return 1 if c lowercase and 0 when otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
