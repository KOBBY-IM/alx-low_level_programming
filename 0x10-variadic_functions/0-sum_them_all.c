#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */


int sum_them_all(const unsigned int n, ...)
{
	/**
	*unsigned int i;
	*va_list list;
	*int sum;
	*
	*va_start(list, n);
	*for (i = 0, sum = 0; i < n; i++)
	*	sum += va_arg(list, int);
	*
	*va_end(list);
	*
	*return (sum);
	*/


	va_list valist;
	unsigned int sum = 0, i;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	va_start(valist, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
