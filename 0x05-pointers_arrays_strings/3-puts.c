#include "main.h"

/**
 * _puts - prints output on stdout precided by a \n
 *
 * returns (0) always success
 *
 **/

void _puts(char *str)
{
	while(*str != '\0')
		_puts(str);
}
