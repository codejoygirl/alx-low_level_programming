#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: function parameter
 * Return: 0
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k = n % 10;
	else
		k = (n % 10) * -1;
	_putchar(k + '0');
	return (k);
}

