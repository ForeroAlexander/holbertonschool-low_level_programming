#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - it's passed parameter through function pointer
 * @name: name of the person
 * @f: name function pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;

	if (!name)
		return;

	f(name); /* (*f)(name) is the same and both is dereference */
}
