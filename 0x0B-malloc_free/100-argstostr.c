#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all program arguments
 *
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: a pointer to the array of char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, totalbytes = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j); ++j)
			;
		totalbytes += j;
		++totalbytes; /* space for newline */
	}
	++totalbytes; /* space for string terminator */

	p = (char *) malloc(totalbytes * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; ++i, ++k)
	{
		for (j = 0; *(*(av + i) + j); ++j, ++k)
			*(p + k) = *(*(av + i) + j);
		*(p + k) = '\n';
	}
	*(p + k + 1) = '\0';
	return (p);
}
