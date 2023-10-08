#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - allocates memory with malloc
 * @b: size of memory
 * Return: pointer to new memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
