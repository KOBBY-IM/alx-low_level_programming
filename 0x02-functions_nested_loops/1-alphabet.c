#include "main.h"

/**
 * main- print alphapbet in lowecase (a-z)
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);


	_putchar('\n');
}
