#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (!(i == j))
			{
				_putchar(' ');
			}
			else
				_putchar(92);
		}
		_putchar('\n');
	}
}
