#include "main.h"

/**
 * _strchr - Locates the first occurrence of character @c in string @s.
 * @s: The string to search within.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of @c in @s, or NULL if not found.
 */

char *_strchr(char *s, char c);
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[1] == c)
			return (&s[1]);
	}
	return (0);
}
