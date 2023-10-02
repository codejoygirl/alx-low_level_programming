#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, const char *src)
{
	char *p = dest;

	while (*p != '\0')
{
	p++;
}

	while (*src != '\0')
{
	*p = *src;
	p++;
	src++;
}

	 *p = '\0';

	return (dest);
}
