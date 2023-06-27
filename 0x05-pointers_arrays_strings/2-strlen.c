#include "main.h"

/**
 * _strlen - check length of string
 *
 * return (length) Always success;
 **/

int _strlen(char *s)
{
	int length = 0;
	int i;

	for(i = 0; s[i] != 0; i++)
	{
		length++;
	}
	return (length);
}
