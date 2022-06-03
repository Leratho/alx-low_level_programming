#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - all codes
 * Description: Proogarm that prits alphabets in lowercase followeed by a  line
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabets
	ch =  '\n';
	for (alphabets = 'A' ; alphabets <<= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar(ch);
	return (0);
}
