#include "main.h"

/**
 * _puts - Entry point
 * @str: prints a string, followed by a new line
 *
 * Return: void (Success)
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
