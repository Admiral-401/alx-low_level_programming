#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * 
 * Description: prints the numbers, from 0 to 9 and prints it on stdout
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
        unsigned int i;

        for (i = 48; i <= 57; i++)
        {
		if (i == 50)
			continue;
		if (i == 52)
			continue;
		_putchar(i);
        }
	_putchar('\n');
}
