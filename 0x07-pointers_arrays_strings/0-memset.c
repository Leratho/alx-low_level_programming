#include "main.h"
#include <string.h>

/**
 * _memset - memset function
 * @s: start point of string to change
 * @b: value that will replace
 * @n: number of bytes to change
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s + n, b, n * sizeof(char)));
}
