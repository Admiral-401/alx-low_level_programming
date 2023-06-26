#include "main.h"
/**
 * swap_int - swaps two integer values
 *
 * return (0); Always success
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
