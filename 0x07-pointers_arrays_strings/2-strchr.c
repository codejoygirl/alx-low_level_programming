#include "main.h"

/**
 * _strchr - Locates the first occurrence of character @c in string @s.
 * @s: The string to search within.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of @c in @s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
if (s == NULL)
{
	return (NULL);
}

while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	if (*s == c)
	{
	return (s);
	}

	return (NULL);
}
