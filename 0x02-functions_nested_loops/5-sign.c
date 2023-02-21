#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: character to detrmine the sign
 * Return: 1 and print + if greater than zero
 *	0 and print 0 if zero
 *	-1 and print - if less than zero
 *
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
