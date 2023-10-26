#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number as a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	size_t i, len;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len])
		len++;

	num = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		num += b[i] - '0';
	}

	return (num);
}
