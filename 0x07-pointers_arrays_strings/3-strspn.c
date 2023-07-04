#include "main.h"

/**
 * _strspn - Shecks for length of prefix
 * @s: string to be checked
 * @accept: to be compared to string
 *
 * Return: (0);
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, num, check;

	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				num++;
				check = 1;
			}
		}
		if (check == 0)
			return (num);
	}
	return (num);

}
