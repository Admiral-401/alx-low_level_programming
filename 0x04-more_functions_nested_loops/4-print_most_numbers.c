#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 excluding 2 & 4
 * Description: prints the numbers, from 0 to 9 and print on stdout
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	unsigned int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
