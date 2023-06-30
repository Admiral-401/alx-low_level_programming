#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: Stores final string
 * @src: string to be concatenated
 *
 * Return: char (true)
 *
 **/

char *_strcat(char *dest, char *src)
{
	size_t = i, j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
