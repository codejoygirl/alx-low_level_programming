#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - To print name
 *@name: The name of string
 *@f : The function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
