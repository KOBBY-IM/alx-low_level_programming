#include <stdio.h>

/**
 * main - pirnt lowercase alphabet a-z but without 'q' and 'e' 
 * Always return 0 (success)
 */

int main(void)

{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
