#include "main.h"

/**
 *_memset - fill a block of memory with a specific value
 *@s: Pointer to the memory area to be filled.
 *@b: The desired value
 *@n: The number of bytes to fill.
 *  Return: changed array wth new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
