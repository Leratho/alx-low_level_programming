#include "main.h"

/**
 * main - print_alphabet_x10, print alphabet
 *
 * Description: prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int bet;

	for (bet = 'a' ; bet <= 'z' ; bet++)
	{
		_putchar (bet);
	}
	_putchar ('\n');

}
