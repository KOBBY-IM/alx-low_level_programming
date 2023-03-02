#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (s[index1] == leet[index2] ||
			    s[index1] - 32 == leet[index2])
				s[index1] = index2 + '0';
		}

		index1++;
	}

	return (s);
}
