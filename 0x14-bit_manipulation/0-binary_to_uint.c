#include "main.h"

/**
 * binary_to_uint - To convert binary to unsigned int
 * @b: Char string
 * Return: Converted decimal number or 0 if unconvertable char exists
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pow;
	int le = 0;

	if (!b)
		return (0);

	while (b[le])
	{
		if (b[le] != '0' && b[le] != '1')
			return (0);
		le++;
	}
	pow = 1, tot = 0, le--;

	while (le >= 0)
	{
		if (b[le] == '1')
			tot += pow;
		le--, pow *= 2;
	}

	return (tot);
}
