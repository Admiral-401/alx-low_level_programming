#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: holds value for first int
 * @b: holds value for second int
 *
 * Return: Nothing
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
