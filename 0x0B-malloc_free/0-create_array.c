#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create arrary of charcters
 * @size : size of array
 * @c : character to fill array
 * Return: pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
