#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Description: prints lowercase alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{

	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar ('\n');
}
