#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Pointer to the name to be printed
 * @f: Function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
