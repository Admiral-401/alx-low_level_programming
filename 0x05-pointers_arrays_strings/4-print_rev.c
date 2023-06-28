#include "main.h"

/**
 * print_rev - prints a string on reverse
 * @s: Receives reversed sting
 *
 * Return: void
 *
 **/

void print_rev(char *s)
{
	int ch = 0;

	while (s[ch] != '\0')
	{
		ch++;
	}
	for (ch -= 1; ch >= 0; ch--)
	{
		_putchar(s[ch]);
	}
	_putchar('\n');
}
