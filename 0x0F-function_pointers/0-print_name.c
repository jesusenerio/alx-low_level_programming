#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name on the screen
 * @name: pointer to name
 * @f: pointer to f
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
