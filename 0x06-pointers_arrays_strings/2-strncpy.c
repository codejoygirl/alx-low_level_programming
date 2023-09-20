#include <stdio.h>

/**
 * _strncpy - Copies a string with a limit of n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string to be copied to dest.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}

	while (i < n) 
{
	dest[i] = '\0';
	i++;
}

	return (dest);
}
