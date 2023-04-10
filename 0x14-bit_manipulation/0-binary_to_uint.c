#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* initialize the result variable to 0 */
	 int i = 0;


	if (b == NULL) /* if b is NULL, return 0 */
	{
        return 0;
    }
       while (b[i] != '\0') /* iterate through the string until the end */
	{
		if (b[i] == '0' || b[i] == '1') /* if the current character is a 0 or 1 */
		{
			result = result << 1; /*shift the current result left by 1 bit */
			result += b[i] - '0'; /* add the current bit to the result */
        }
		else /* if the current character is not a 0 or 1, return 0 */
		{
			return 0;
		}
		i++;
	}
	return result;
}

