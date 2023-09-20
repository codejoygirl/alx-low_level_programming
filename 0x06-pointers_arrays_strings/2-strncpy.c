#include <stdio.h>

/**
 * _strncpy - Copies a string up to n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}


	while (n > 0)
{
	*dest = '\0';
	dest++;
	n--;
}

	return (dest_start);
}
