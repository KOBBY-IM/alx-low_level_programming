#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create arrary of charcters
 * @size : size of array
 * @c : character to fill array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);


	a = malloc(size * sizeof(a));

	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	
	return (a);


	/*if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL);
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c; 

	return (a);*/

}
