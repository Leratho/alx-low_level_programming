#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Description: prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char n;

	int i = 1;

	while (1 <= 10)

	{
		n = 'a';
		while (n <= 'z')

		{
			_putchar(n);
			n++;
		}
		_putchar ('\n');
		i++;
	}
}
