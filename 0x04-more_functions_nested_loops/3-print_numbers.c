#include"main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * 
 * Description: This function prints the numbers from 0 to 9 to the standard output.
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
