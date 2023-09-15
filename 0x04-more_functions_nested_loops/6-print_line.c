#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n:  is the number of times the character _ should be printed
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(45);
	}
	_putchar('\n');
}
