#include "main.h"

/**
 * flip_bits - It flip bits to convert from one number to another number
 * @n: The first number
 * @m: The second number to be converted to
 * Return: The number of bits being needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int di = n ^ m;
	int count = 0;

	while (di)
	{
		count++;
		di &= (di - 1);
	}

	return (count);
}
