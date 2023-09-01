#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string with binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j = 0;
	unsigned int dec = 0;
	char *str = "Error";

	if (!b)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			str[j]++;
		}
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}

