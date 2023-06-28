#include "main.h"

/**
 * _atoi - convert string to int
 * @s: The location to be convrerted
 *
 * Return: an Int
 **/

int _atoi(char *s)
{
	int c = 0;

	unsighed int n = 0;

	int min = 1;

	int si = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min * = -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			is = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (is == 1)
		{
			break;
		}
		c++;
	}
	ni * = min;
	return (ni);
}
