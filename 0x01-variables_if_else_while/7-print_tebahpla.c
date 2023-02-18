#include <stdio.h>

/**
 *main - print alphabet reverse z-a
 *Return: Always
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
