#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry function that prints the name
 * @name: variable to store name
 * @f: pointer to function
 * Return: ...
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
