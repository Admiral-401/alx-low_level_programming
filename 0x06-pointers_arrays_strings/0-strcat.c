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
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
