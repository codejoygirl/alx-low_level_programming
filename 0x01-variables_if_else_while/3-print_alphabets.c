#include <stdio.h>
/**
 * main - Prints alphabet 'a' to 'z'then 'A' to 'Z'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar (c++);
	c = 'A';
	while (c <= 'Z')
		putchar (c++);
	putchar('\n');
	return (0);
}
