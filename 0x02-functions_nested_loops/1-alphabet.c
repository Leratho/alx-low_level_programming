#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Description: prints lowercase alphabets
 * Return: void
 */

void print_alphabet(void)
{

	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
}
