#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Checks on the last didgit of the assigned var
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n);
}
else if (n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
}
else
{
	printf("Last digit of % d is % d and is 0\n", n, n);
}
return (0);
}
