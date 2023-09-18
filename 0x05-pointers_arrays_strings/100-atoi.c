#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s)
{
	if (*s == '-')
{
	sign = -1;
}
	else if (*s >= '0' && *s <= '9')
{
	result = result * 10 + (*s - '0');
}
	else if (result != 0)
{
	break;
}

	s++;
}

return (result * sign);
}
