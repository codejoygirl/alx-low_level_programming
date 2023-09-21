#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a[5] = {98, 98, 98, 98, 98};
	int *p = a;

	*(p + 2) = 98;
	printf("a[2] = %d\n", *(p + 2));

return (0);
}
