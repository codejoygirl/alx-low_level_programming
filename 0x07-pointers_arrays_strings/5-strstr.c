#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring @needle
 * in the string @haystack.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
	return (NULL);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return (NULL);
}
