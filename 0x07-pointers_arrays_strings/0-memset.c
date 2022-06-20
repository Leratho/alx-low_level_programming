#include "main.h"

/**
 * _memset - memset function
 * @s: start point of string to change
 * @b: value that will replace
 * @n: number of bytes to change
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
