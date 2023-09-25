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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
