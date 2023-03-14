#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to allocate new memory
 * @str: string given as parameter
 * Return: pointer to new allocated space
 *
 */

char *_strdup(char *str)
{
	char *a; /*duplicated string*/
	int i =0, len =0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	a = malloc(i * sizeof(*a) + 1);if (a == NULL)
		return (NULL);

	for (len = 0; len < i; len++)
		a[len] = str[len];
	a[len] = '\0';

	return (a);
}
