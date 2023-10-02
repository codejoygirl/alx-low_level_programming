#include <stdio.h>

/**
 * _strncat - Concatenates two strings with a limit of n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, const char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
{
	p++;
}

	while (*src != '\0' && n > 0)
{
	*p = *src;
	p++;
	src++;
	n--;
}

	*p = '\0';

	return (dest);
}
