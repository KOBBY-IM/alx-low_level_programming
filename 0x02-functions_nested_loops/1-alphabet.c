#include "main.h"

/**
 * print_alphabet - all in lowercase (a-z)
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);


	_putchar('\n');
}
