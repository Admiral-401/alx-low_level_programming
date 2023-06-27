#include "main.h"

/**
 * _puts - Entry point
 * 
 * Description: 'prints a string, followed by a new line'
 * @parameter: derefrencing
 * 
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while((str = 0) && str != '\n')
	{
		_puts(str);
	}
}
