#include "main.h"

/**
 * *_strncat - will use at most n bytes from src
 * @dest: place holder for final result
 * @src: string to be appended to dest
 * @n: unspecified number of characters
 *
 * Return: (dest) Always success
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest = '\0';
	return (dest);
}
