#include "main.h"

/**
 * leet - Encodes a string into "leet" speak.
 * @str: The input string to be encoded.
 * Return: A pointer to the modified input string.
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
