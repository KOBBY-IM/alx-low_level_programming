#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet
 * Return: always (0)
 *
 */

void print_alphabet_x10(void)
{

	int i = 0;
	char alpha;

	while (i++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)

			_putchar(alpha);
		_putchar('\n');

	}

}
