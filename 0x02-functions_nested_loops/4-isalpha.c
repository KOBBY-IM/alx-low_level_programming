#include "main.h"

/**
 * _isalpha- check for alphabetic letter
 * @c: charcter to check for whether lowercase or uppercase alphabet
 * Return: 1 if any alphabet else 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
