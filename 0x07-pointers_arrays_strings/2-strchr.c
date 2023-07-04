#include <stdio.h>
#include "main.h"

/**
 * *_strchr - check for a chara in string
 * @s: string being checked for char
 * @c: char to be checked
 *
 * Return: (s + 1)
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
