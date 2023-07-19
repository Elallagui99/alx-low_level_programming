#include "function_pointers.h"

/**
 * print_name - printsa name
 * @name: name to print
 * @f: pointer to function to use
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
