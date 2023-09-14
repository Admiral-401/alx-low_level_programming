#include"main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: function prints the numbers from 0 to 9 to stdout
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	unsigned int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
