#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A pointer to the function that formats the name.
 *
 * Description: This function takes a name and
 * a function pointer as parameters.
 * If both name and f are not NULL, it calls
 * the function pointed by f to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
       /* Call the function pointed by f with the name as an argument*/
}
