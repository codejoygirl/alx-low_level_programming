#include "main.h"

/**
 * set_bit - It sets value of a bit to 1 at given index
 * @n: The decimal number passed by a pointer
 * @index: The index position to be change,from 0
 * Return: Will return 1 if its working,and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int po = 1;

	if (index > 64)
		return (-1);

	while (index > 0)
		index--, po *= 2;
	*n += po;

	return (1);
}
