#include "main.h"
#include <stdio.h>

/**
 * print_binary - To print a binary representation of a number
 * @n: The decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int te = n;
	int i = 0;

	if (n != 0)
	{
		while ((te >>= 1) > 0)
			i++;
		while (shi >= 0)
		{
			if ((n >> i) & 1)
				printf("1");
			else
				printf("0");
			i--;
		}
	}
	else
	{
		printf("0");
	}
}
