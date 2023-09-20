#include <stdio.h>

/**
 * leet - Encodes a string into "leet" speak.
 *
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified input string.
 */


char *leet(char *str)
{
	char leet_map[256] = {0};  /* Initialize the mapping array with zeros*/
    
    /* Set up the leet mapping*/
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

char *p = str;
char *q;
	int shouldExit = 0;
	while (*p != '\0' && !shouldExit)
{
	if (leet_map[(unsigned char)*p])
{
	q = p;
	while (*q != '\0')
{
	if (leet_map[(unsigned char)*q])
{
	*q = leet_map[(unsigned char)*q];
}
	q++;
}
	shouldExit = 1;
}
	p++;
}

	return (str);
}
